#include <gui/screen_gameplay_screen/Screen_gameplayView.hpp>
// To get BITMAP__ID
#include "BitmapDatabase.hpp"
// To use rand()
#include <stdlib.h>
// Handling random value
#ifdef SIMULATOR
    // to use time() on TouchGFX simulator
    #include <time.h>
#else
    // to use HAL_GetTick() on stm32
    #include <stm32f7xx_hal.h>
#endif

#define MATRIX_ROW 8
#define MATRIX_COL 15

// 1 for running, 0 for not running
int timer_running = 1;
int winning_condition = 0;
int bomb_num_buffer;
int displayed_count;

// Set extra head and tail to empty for handling edge problem
static enum Screen_gameplayView::gird_properties matrix[1 + MATRIX_ROW + 1][1 + MATRIX_COL + 1] = {
    Screen_gameplayView::gird_properties::EMPTY
};

// 2D array store which button has been displayed
// Default undisplayed: 0, displayed: 1
static int matrix_displayed[1 + MATRIX_ROW + 1][1 + MATRIX_COL + 1] = { 0 };

void Screen_gameplayView::setupScreen()
{
    Screen_gameplayViewBase::setupScreen();
    // Get the number of bombs
    int bomb_num = presenter->get_bomb_num();
    bomb_num_buffer = bomb_num;
    Unicode::snprintf(text_mime_numBuffer, TEXT_MIME_NUM_SIZE, "%d", bomb_num);
    text_mime_num.invalidate();

    // Tell the widget which callback to use when it is touched
    // The callback function is defined in: TouchGFX\gui\include\gui\screen_gameplay_screen\Screen_gameplayView.hpp
    // This is done in setupScreen() to ensure that the callback is set every time the screen is entered.
    // REF: https://support.touchgfx.com/docs/development/ui-development/touchgfx-engine-features/mixins#clicklistener
    for (int row = 1; row <= MATRIX_ROW; row++) {
        for (int col = 1; col <= MATRIX_COL; col++) {
            btn_table(row, col).setClickAction(Button_Callback);
        }
    }

    // Initail setting for matrix and matrix_displayed
    for (int row = 1; row <= MATRIX_ROW; row++) {
        for (int col = 1; col <= MATRIX_COL; col++) {
            // Clear the matrix with EMPTY
            matrix[row][col] = gird_properties::EMPTY;
            // Clear the matrix with 0
            matrix_displayed[row][col] = 0;
            // Let timer runs
            timer_running = 1;
        }
    }

    // Set bombs in matrix
    // Random seed
    #ifdef SIMULATOR
        // time.h is included in the head of this file
        srand(time(NULL));
    #else
        srand(HAL_GetTick());
    #endif
    // Buffer for bombs
    int bomb_to_be_set = bomb_num;
    
    while (bomb_to_be_set >= 1) {
        // rand() % (max - min + 1) + min
        int row = rand() % (30 - 1 + 1) + 1;
        int col = rand() % (20 - 1 + 1) + 1;
        if (matrix[row][col] == gird_properties::EMPTY) {
            matrix[row][col] = gird_properties::BOMB;
            bomb_to_be_set = bomb_to_be_set - 1;
            #ifdef SIMULATOR
                touchgfx_printf("BOMB %d at [%d][%d]\n", bomb_to_be_set, row, col);
            #endif
        }
    }

    
    // Count surrounded bombs and set it to matrix
    for (int row = 1; row <= MATRIX_ROW; row++) {
        for (int col = 1; col <= MATRIX_COL; col++) {
            if (matrix[row][col] != gird_properties::BOMB) {
                // Count surrounded grid
                int count = 0;
                for (int i = -1; i < 1; i++) {
                    for (int j = -1; j <= 1; j++) {
                        if (matrix[row + j][col + i] == gird_properties::BOMB) {
                            count = count + 1;
                        }
                    }
                }

                switch (count) {
                    case 0: matrix[row][col] = gird_properties::EMPTY;  break;
                    case 1: matrix[row][col] = gird_properties::COUNT1; break;
                    case 2: matrix[row][col] = gird_properties::COUNT2; break;
                    case 3: matrix[row][col] = gird_properties::COUNT3; break;
                    case 4: matrix[row][col] = gird_properties::COUNT4; break;
                    case 5: matrix[row][col] = gird_properties::COUNT5; break;
                    case 6: matrix[row][col] = gird_properties::COUNT6; break;
                    case 7: matrix[row][col] = gird_properties::COUNT7; break;
                    case 8: matrix[row][col] = gird_properties::COUNT8; break;
                    // Not doing anything, whici is equivalent to 'pass' in python
                    default: ;
                        #ifdef SIMULATOR
                            touchgfx_printf("Failed: matrix[%d][%d], count:%d\n", row, col, count);
                        #endif
                }
            }
        }
    }
    
    #ifdef SIMULATOR
        for (int row = 1; row <= MATRIX_ROW; row++) {
            for (int col = 1; col <= MATRIX_COL; col++) {
                char testing_buffer = '\0';
                switch (matrix[row][col]) {
                    case gird_properties::EMPTY : testing_buffer = '0'; break;
                    case gird_properties::COUNT1: testing_buffer = '1'; break;
                    case gird_properties::COUNT2: testing_buffer = '2'; break;
                    case gird_properties::COUNT3: testing_buffer = '3'; break;
                    case gird_properties::COUNT4: testing_buffer = '4'; break;
                    case gird_properties::COUNT5: testing_buffer = '5'; break;
                    case gird_properties::COUNT6: testing_buffer = '6'; break;
                    case gird_properties::COUNT7: testing_buffer = '7'; break;
                    case gird_properties::COUNT8: testing_buffer = '8'; break;
                    case gird_properties::BOMB  : testing_buffer = '*'; break;
                    default:
                        touchgfx_printf("ERROR content in the matrix\n");
                }
                touchgfx_printf("%c ", testing_buffer);
            }
            touchgfx_printf("\n");
        }
    #endif
}

void Screen_gameplayView::tearDownScreen()
{
    Screen_gameplayViewBase::tearDownScreen();
}

// Set the button click listener
// REF: https://support.touchgfx.com/docs/development/ui-development/touchgfx-engine-features/mixins#clicklistener
Screen_gameplayView::Screen_gameplayView() :
    // The callback declaration and function to handle the event need to be bound to the view object.
    Button_Callback(this, &Screen_gameplayView::Button_Click_Handler) { }

// Listen to button click events
void Screen_gameplayView::Button_Click_Handler(const Button& btn, const ClickEvent& event) {
    // ClickEvents are generated by the HAL layer, the enum contains 'PRESSED', 'RELEASED' and 'CANCEL'.
    // REF: https://support.touchgfx.com/docs/api/classes/classtouchgfx_1_1_click_event#public-types
    // button being clicked, call function and do callback logic
    if (event.getType() == event.RELEASED)
        button_clicked(const_cast<Button &>(btn), const_cast<ClickEvent &>(event));
}

void Screen_gameplayView::button_clicked(Button &btn, ClickEvent &event) {
    // Get button coordinates, every button is 25 by 25 pixels
    // x for colume, y for row
    int x = btn.getX() / 25 + 1;
    int y = btn.getY() / 25 + 1;
    
    #ifdef SIMULATOR
        touchgfx_printf("button[%d][%d] is pressed\n", y, x);
    #endif

    // Check wining or not
    winning_condition = MATRIX_ROW * MATRIX_COL - bomb_num_buffer;

    // Clicking logic
    // If the pressed button is a BOMB, you lose the game
    if(matrix[y][x] == gird_properties::BOMB) {
        Unicode::snprintf(text_infoBuffer, TEXT_INFO_SIZE, "LOSER");
        text_info.invalidate();
        // Stop the timer
        timer_running = 0;
        // Show all BOMBS 
        for (int row = 1; row <= MATRIX_ROW; row++) {
            for (int col = 1; col <= MATRIX_COL; col++) {
                // // Show the contents under the button
                matrix_content(row, col);
            }
        }
    }
    // The pressed button isn't a BOMB, but your days are numbered. HEHE!
    else {
        blank_recursing(y, x);
    }
    matrix_content(y, x);

    // Scan the matrix_displayed[][] to count the number of displayed button
    displayed_count = 0;
    for (int row = 1; row <= MATRIX_ROW; row++) {
            for (int col = 1; col <= MATRIX_COL; col++) {
                if (matrix_displayed[row][col] == 1) {
                    displayed_count = displayed_count + 1;
                }
            }
    }

    if (winning_condition == displayed_count) {
        timer_running = 0;
        Unicode::snprintf(text_infoBuffer, TEXT_INFO_SIZE, "WINNER");
        text_info.invalidate();
    }

    #ifdef SIMULATOR
    touchgfx_printf("displayed_count: %d\n", displayed_count);
    #endif

    
}

// Show the contents under the button
void Screen_gameplayView::matrix_content(int row, int col) {
    // Datatype decalred in 'touchgfx/Bitmap.hpp'
    uint16_t BITMAP__ID = 0;

    switch(matrix[row][col]) {
        case gird_properties::COUNT1: BITMAP__ID = BITMAP_BTN_01_ID;    break;
        case gird_properties::COUNT2: BITMAP__ID = BITMAP_BTN_02_ID;    break;
        case gird_properties::COUNT3: BITMAP__ID = BITMAP_BTN_03_ID;    break;
        case gird_properties::COUNT4: BITMAP__ID = BITMAP_BTN_04_ID;    break;
        case gird_properties::COUNT5: BITMAP__ID = BITMAP_BTN_05_ID;    break;
        case gird_properties::COUNT6: BITMAP__ID = BITMAP_BTN_06_ID;    break;
        case gird_properties::COUNT7: BITMAP__ID = BITMAP_BTN_07_ID;    break;
        case gird_properties::COUNT8: BITMAP__ID = BITMAP_BTN_08_ID;    break;
        case gird_properties::EMPTY : BITMAP__ID = BITMAP_BTN_BLANK_ID; break;
        case gird_properties::BOMB  : BITMAP__ID = BITMAP_BTN_BOMB_ID;  break;
    }

    // Replace the displayed picture
    btn_table(row, col).setBitmaps(Bitmap(BITMAP__ID), Bitmap(BITMAP__ID));
    btn_table(row, col).invalidate();
}

void Screen_gameplayView::blank_recursing(int row, int col) {
    // Check if it has been clicked or is out of range
    if (matrix_displayed[row][col] || row < 1 || row > MATRIX_ROW || col < 1 || col > MATRIX_COL) {
        return;
    }
    // If it's still not displayed
    else if (matrix_displayed[row][col] == 0) {
        // check the contents of the matrix[row][col]
        switch (matrix[row][col]) {
            // Ha! You loser!
            case gird_properties::BOMB:
                break;
            // Okay, you are alive.
            case gird_properties::EMPTY:
                matrix_content(row, col);
                matrix_displayed[row][col] = 1;
                // Recurse to check surrounded buttons
                for (int i = -1; i < 1; i++) {
                    for (int j = -1; j <= 1; j++) {
                        blank_recursing(row + j, col + i);
                    }
                }
                break;
            // For numbers surrounded by bombs
            default:
                matrix_content(row, col);
                matrix_displayed[row][col] = 1;
                break;
        }
    }
}

// Setup the timer by using 'DigitalClock' document provided by TouchGFX
void Screen_gameplayView::handleTickEvent() {
    // Return(stop counting) if it's set to be stopped
    if(!timer_running) {
        return;
    }
    else {
        // Update the clock
        tick_counter++;
        if (tick_counter % 60 == 0) {
            if (++timer_seconds >= 60) {
                timer_seconds = 0;
                if (++timer_minutes >= 60) {
                    timer_minutes = 0;
                    if (++timer_hours >= 24) {
                        timer_hours = 0;
                    }
                }
            }
            // The default setting of DigitalClock is to display (hour, min, sec), and sec can be set to invisible
            // So I replace hour and min with min and sec, it becomes (min, sec, 0)
            digitalClock.setTime24Hour(timer_minutes, timer_seconds, 0);
        }
    }
}

touchgfx::ClickListener<touchgfx::Button> &Screen_gameplayView::btn_table(int row, int col)
{
    // from 1 ~ 8 to 0 ~ 7
    row = row - 1;
    // from 1 ~ 15 to 0 ~ 14
    col = col - 1;
    switch (row)
    {
    case 0:
        switch (col)
        {
        case 0:  return button_00_00;
        case 1:  return button_00_01;
        case 2:  return button_00_02;
        case 3:  return button_00_03;
        case 4:  return button_00_04;
        case 5:  return button_00_05;
        case 6:  return button_00_06;
        case 7:  return button_00_07;
        case 8:  return button_00_08;
        case 9:  return button_00_09;
        case 10: return button_00_10;
        case 11: return button_00_11;
        case 12: return button_00_12;
        case 13: return button_00_13;
        case 14: return button_00_14;
        default:
            return button_00_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    case 1:
        switch (col)
        {
        case 0:  return button_01_00;
        case 1:  return button_01_01;
        case 2:  return button_01_02;
        case 3:  return button_01_03;
        case 4:  return button_01_04;
        case 5:  return button_01_05;
        case 6:  return button_01_06;
        case 7:  return button_01_07;
        case 8:  return button_01_08;
        case 9:  return button_01_09;
        case 10: return button_01_10;
        case 11: return button_01_11;
        case 12: return button_01_12;
        case 13: return button_01_13;
        case 14: return button_01_14;
        default:
            return button_01_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    case 2:
        switch (col)
        {
        case 0:  return button_02_00;
        case 1:  return button_02_01;
        case 2:  return button_02_02;
        case 3:  return button_02_03;
        case 4:  return button_02_04;
        case 5:  return button_02_05;
        case 6:  return button_02_06;
        case 7:  return button_02_07;
        case 8:  return button_02_08;
        case 9:  return button_02_09;
        case 10: return button_02_10;
        case 11: return button_02_11;
        case 12: return button_02_12;
        case 13: return button_02_13;
        case 14: return button_02_14;
        default:
            return button_02_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    case 3:
        switch (col)
        {
        case 0:  return button_03_00;
        case 1:  return button_03_01;
        case 2:  return button_03_02;
        case 3:  return button_03_03;
        case 4:  return button_03_04;
        case 5:  return button_03_05;
        case 6:  return button_03_06;
        case 7:  return button_03_07;
        case 8:  return button_03_08;
        case 9:  return button_03_09;
        case 10: return button_03_10;
        case 11: return button_03_11;
        case 12: return button_03_12;
        case 13: return button_03_13;
        case 14: return button_03_14;
        default:
            return button_03_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    case 4:
        switch (col)
        {
        case 0:  return button_04_00;
        case 1:  return button_04_01;
        case 2:  return button_04_02;
        case 3:  return button_04_03;
        case 4:  return button_04_04;
        case 5:  return button_04_05;
        case 6:  return button_04_06;
        case 7:  return button_04_07;
        case 8:  return button_04_08;
        case 9:  return button_04_09;
        case 10: return button_04_10;
        case 11: return button_04_11;
        case 12: return button_04_12;
        case 13: return button_04_13;
        case 14: return button_04_14;
        default:
            return button_04_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    case 5:
        switch (col)
        {
        case 0:  return button_05_00;
        case 1:  return button_05_01;
        case 2:  return button_05_02;
        case 3:  return button_05_03;
        case 4:  return button_05_04;
        case 5:  return button_05_05;
        case 6:  return button_05_06;
        case 7:  return button_05_07;
        case 8:  return button_05_08;
        case 9:  return button_05_09;
        case 10: return button_05_10;
        case 11: return button_05_11;
        case 12: return button_05_12;
        case 13: return button_05_13;
        case 14: return button_05_14;
        default:
            return button_05_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    case 6:
        switch (col)
        {
        case 0:  return button_06_00;
        case 1:  return button_06_01;
        case 2:  return button_06_02;
        case 3:  return button_06_03;
        case 4:  return button_06_04;
        case 5:  return button_06_05;
        case 6:  return button_06_06;
        case 7:  return button_06_07;
        case 8:  return button_06_08;
        case 9:  return button_06_09;
        case 10: return button_06_10;
        case 11: return button_06_11;
        case 12: return button_06_12;
        case 13: return button_06_13;
        case 14: return button_06_14;
        default: 
            return button_06_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    case 7:
        switch (col)
        {
        case 0:  return button_07_00;
        case 1:  return button_07_01;
        case 2:  return button_07_02;
        case 3:  return button_07_03;
        case 4:  return button_07_04;
        case 5:  return button_07_05;
        case 6:  return button_07_06;
        case 7:  return button_07_07;
        case 8:  return button_07_08;
        case 9:  return button_07_09;
        case 10: return button_07_10;
        case 11: return button_07_11;
        case 12: return button_07_12;
        case 13: return button_07_13;
        case 14: return button_07_14;
        default:
            return button_07_00;
            #ifdef SIMULATOR
                touchgfx_printf("(%d, %d) not exists.\n", row, col);
            #endif
        }
        break;
    default:
        return button_00_00;
        #ifdef SIMULATOR
            touchgfx_printf("(%d, %d) not exists.\n", row, col);
        #endif
    }
}
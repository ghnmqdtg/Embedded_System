#include <gui/screen_gameplay_screen/Screen_gameplayView.hpp>

void Screen_gameplayView::setupScreen()
{
    Screen_gameplayViewBase::setupScreen();
    int bomb_num = presenter->get_bomb_num();
    Unicode::snprintf(text_mime_numBuffer, TEXT_MIME_NUM_SIZE, "%d", bomb_num);
    text_mime_num.invalidate();
    button_00_00.setClickAction(Button_Callback);
}

void Screen_gameplayView::tearDownScreen()
{
    Screen_gameplayViewBase::tearDownScreen();
}

// Set the button click listener
// REF: https://support.touchgfx.com/docs/development/ui-development/touchgfx-engine-features/mixins#clicklistener
Screen_gameplayView::Screen_gameplayView() :
    // In constructor for callback, bind to this view object and bind which function to handle the event.
    Button_Callback(this, &Screen_gameplayView::Button_Click_Handler) { }

// Listen to button click events
void Screen_gameplayView::Button_Click_Handler(const Button& btn, const ClickEvent& event) {
    // ClickEvents are generated by the HAL layer, the enum contains 'PRESSED', 'RELEASED' and 'CANCEL'.
    // button being clicked, call function and do callback logic
    if (event.getType() == event.RELEASED)
        grid_clicked(const_cast<Button &>(btn), const_cast<ClickEvent &>(event));
}

void Screen_gameplayView::grid_clicked(Button &btn, ClickEvent &event) {
    // Get button coordinates
    int row = event.getX() / 25;
    int col = event.getY() / 25;
    #ifdef SIMULATOR
        touchgfx_printf("button[%d][%d] is pressed\n", row, col);
    #endif
}

// Setup the timer by using 'DigitalClock' document provided by TouchGFX
void Screen_gameplayView::handleTickEvent()
{
    // Return(stop counting) if it's set to be stopped

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
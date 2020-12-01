#include <gui/screen_default_screen/Screen_defaultView.hpp>
#include <string.h>
#include <stdlib.h>
#include <math.h>

size_t bomb_num = 0;
size_t val = 0;
// String buffer
char bomb_str[16];

// Convert string into int
size_t str_to_int(char *str, int val);

Screen_defaultView::Screen_defaultView() {

}

void Screen_defaultView::setupScreen() {
    Screen_defaultViewBase::setupScreen();
}

void Screen_defaultView::tearDownScreen() {
    Screen_defaultViewBase::tearDownScreen();
}

size_t str_to_int(char *str, int val) {
    int len = strlen(str);
    if (len != 0) {
        for (int i = 0; i < len; i++) {
            val = val + (str[i] - 48) * pow(10, len - i) / 10;
        }
        #ifdef SIMULATOR
            touchgfx_printf("Value: %d\n", val);
        #endif
    }
    else {
        val = 0;
    }
    return val;
}

void Screen_defaultView::string_handler(char *str, char c) {
    int len = strlen(str);
    // TEXT_NUM_SIZE: the size of the Wildcard Buffers
    if (len + 1 >= 10) {
        return;
    }
    else {
        if (len == 0 && c == '0') {
            return;
        }
        else {
            str[len] = c;
            str[len + 1] = '\0';
        }
        #ifdef SIMULATOR
            // touchgfx_printf("strlen: %d\n", strlen(str));
        #endif
    }
}

void Screen_defaultView::btn_0_clicked() {
    string_handler(bomb_str, '0');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    // Invalidate text area, which will result in it being redrawn in next tick.
    text_num.invalidate();
}

void Screen_defaultView::btn_1_clicked() {
    string_handler(bomb_str, '1');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_2_clicked() {
    string_handler(bomb_str, '2');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_3_clicked() {
    string_handler(bomb_str, '3');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_4_clicked() {
    string_handler(bomb_str, '4');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_5_clicked() {
    string_handler(bomb_str, '5');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_6_clicked() {
    string_handler(bomb_str, '6');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_7_clicked() {
    string_handler(bomb_str, '7');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_8_clicked() {
    string_handler(bomb_str, '8');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_9_clicked() {
    string_handler(bomb_str, '9');
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_cancel_clicked() {
    bomb_str[strlen(bomb_str) - 1] = '\0';
    bomb_num = str_to_int(bomb_str, val);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    text_num.invalidate();
}

void Screen_defaultView::btn_enter_clicked() {
    if (bomb_num > 99) {
        bomb_num = 99;
    }
    else if (bomb_num < 5) {
        bomb_num = 5;
    }
}
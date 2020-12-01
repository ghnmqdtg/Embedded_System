#include <gui/screen_default_screen/Screen_defaultView.hpp>
#include <string.h>
using namespace std;

int bomb_num = 0;

Screen_defaultView::Screen_defaultView()
{

}

void Screen_defaultView::setupScreen()
{
    Screen_defaultViewBase::setupScreen();
}

void Screen_defaultView::tearDownScreen()
{
    Screen_defaultViewBase::tearDownScreen();
}

void Screen_defaultView::btn_0_clicked()
{
    touchgfx_printf("button 0 clicked\n");
    bomb_num = (bomb_num % 10) * 10 + 0;
    touchgfx_printf("%d\n", bomb_num);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    // Invalidate text area, which will result in it being redrawn in next tick.
    text_num.invalidate();
}
void Screen_defaultView::btn_1_clicked()
{
    touchgfx_printf("button 1 clicked\n");
    bomb_num = (bomb_num % 10) * 10 + 1;
    touchgfx_printf("%d\n", bomb_num);
    Unicode::snprintf(text_numBuffer, TEXT_NUM_SIZE, "%d", bomb_num);
    // Invalidate text area, which will result in it being redrawn in next tick.
    text_num.invalidate();
}
void Screen_defaultView::btn_2_clicked()
{
    touchgfx_printf("button 2 clicked\n");
}
void Screen_defaultView::btn_3_clicked()
{
    touchgfx_printf("button 3 clicked\n");
}
void Screen_defaultView::btn_4_clicked()
{
    touchgfx_printf("button 4 clicked\n");
}
void Screen_defaultView::btn_5_clicked()
{
    touchgfx_printf("button 5 clicked\n");
}
void Screen_defaultView::btn_6_clicked()
{
    touchgfx_printf("button 6 clicked\n");
}
void Screen_defaultView::btn_7_clicked()
{
    touchgfx_printf("button 7 clicked\n");
}
void Screen_defaultView::btn_8_clicked()
{
    touchgfx_printf("button 8 clicked\n");
}
void Screen_defaultView::btn_9_clicked()
{
    touchgfx_printf("button 9 clicked\n");
}
void Screen_defaultView::btn_cancel_clicked()
{
    touchgfx_printf("button cancel clicked\n");
}
void Screen_defaultView::btn_enter_clicked()
{
    touchgfx_printf("button enter clicked\n");
}
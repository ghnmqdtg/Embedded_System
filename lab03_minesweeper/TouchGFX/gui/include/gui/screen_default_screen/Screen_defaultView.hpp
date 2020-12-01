#ifndef SCREEN_DEFAULTVIEW_HPP
#define SCREEN_DEFAULTVIEW_HPP

#include <gui_generated/screen_default_screen/Screen_defaultViewBase.hpp>
#include <gui/screen_default_screen/Screen_defaultPresenter.hpp>

class Screen_defaultView : public Screen_defaultViewBase
{
public:
    Screen_defaultView();
    virtual ~Screen_defaultView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
    virtual void btn_0_clicked();
    virtual void btn_1_clicked();
    virtual void btn_2_clicked();
    virtual void btn_3_clicked();
    virtual void btn_4_clicked();
    virtual void btn_5_clicked();
    virtual void btn_6_clicked();
    virtual void btn_7_clicked();
    virtual void btn_8_clicked();
    virtual void btn_9_clicked();
    virtual void btn_cancel_clicked();
    virtual void btn_enter_clicked();
    virtual void string_handler(char *str,  char c);
};

#endif // SCREEN_DEFAULTVIEW_HPP

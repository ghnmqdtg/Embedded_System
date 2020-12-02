#ifndef SCREEN_GAMEPLAYVIEW_HPP
#define SCREEN_GAMEPLAYVIEW_HPP

#include <gui_generated/screen_gameplay_screen/Screen_gameplayViewBase.hpp>
#include <gui/screen_gameplay_screen/Screen_gameplayPresenter.hpp>

class Screen_gameplayView : public Screen_gameplayViewBase
{
public:
    Screen_gameplayView();
    virtual ~Screen_gameplayView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();

    // Use enum class to replace enum
    // REF: https://kheresy.wordpress.com/2019/03/27/using-enum-class/
    enum class gird_properties {
      COUNT1,
      COUNT2,
      COUNT3,
      COUNT4,
      COUNT5,
      COUNT6,
      COUNT7,
      COUNT8,
      EMPTY,
      BOMB,
    };

    // Use 'clicklistener' that TouchGFX provides
    // REF: https://support.touchgfx.com/docs/development/ui-development/touchgfx-engine-features/mixins#clicklistener
    // Declaring callback handler for button
    void Button_Click_Handler(const Button& btn, const ClickEvent& event);

protected:
    // Variables for the timer
    // REF: https://support.touchgfx.com/docs/development/ui-development/ui-components/miscellaneous/digital-clock
    int tick_counter;
    int timer_hours;
    int timer_minutes;
    int timer_seconds;

    // Handling clicks
    void button_clicked(Button &btn, ClickEvent &event);
    
    // Declaring callback type of button and clickEvent
    Callback<Screen_gameplayView, const Button&, const ClickEvent&> Button_Callback;
    
    // Get button widget by parsing button table
    touchgfx::ClickListener<touchgfx::Button> &btn_table(int row, int col);

    // 
    void matrix_content(int row, int col);
    
    // Looking for blank
    void blank_recursing(int row, int col); 
};

#endif // SCREEN_GAMEPLAYVIEW_HPP

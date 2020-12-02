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

    void grid_clicked(Button &btn, ClickEvent &event);
    // Declaring callback type of button and clickEvent
    Callback<Screen_gameplayView, const Button&, const ClickEvent&> Button_Callback;
};

#endif // SCREEN_GAMEPLAYVIEW_HPP

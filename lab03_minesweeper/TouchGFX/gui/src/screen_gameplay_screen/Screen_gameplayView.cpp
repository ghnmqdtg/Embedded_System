#include <gui/screen_gameplay_screen/Screen_gameplayView.hpp>

Screen_gameplayView::Screen_gameplayView()
{

}

void Screen_gameplayView::setupScreen()
{
    Screen_gameplayViewBase::setupScreen();
    Unicode::snprintf(text_mime_numBuffer, TEXT_MIME_NUM_SIZE, "%d", bomb_num);
    text_mime_num.invalidate();
}

void Screen_gameplayView::tearDownScreen()
{
    Screen_gameplayViewBase::tearDownScreen();
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
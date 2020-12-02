#ifndef SCREEN_GAMEPLAYPRESENTER_HPP
#define SCREEN_GAMEPLAYPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen_gameplayView;

class Screen_gameplayPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen_gameplayPresenter(Screen_gameplayView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen_gameplayPresenter() {};
    
    void save_bomb_num(int16_t bombnum)
    {
        model->save_bomb_num(bombnum);
    }

    int16_t get_bomb_num()
    {
        return model->get_bomb_num();
    }
    
private:
    Screen_gameplayPresenter();

    Screen_gameplayView& view;
};

#endif // SCREEN_GAMEPLAYPRESENTER_HPP

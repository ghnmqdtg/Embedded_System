#ifndef SCREEN_DEFAULTPRESENTER_HPP
#define SCREEN_DEFAULTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen_defaultView;

class Screen_defaultPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen_defaultPresenter(Screen_defaultView& v);

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

    virtual ~Screen_defaultPresenter() {};

    void save_bomb_num(int bombnum)
    {
        model->save_bomb_num(bombnum);
    }

    int get_bomb_num()
    {
        return model->get_bomb_num();
    }

private:
    Screen_defaultPresenter();

    Screen_defaultView& view;
};

#endif // SCREEN_DEFAULTPRESENTER_HPP

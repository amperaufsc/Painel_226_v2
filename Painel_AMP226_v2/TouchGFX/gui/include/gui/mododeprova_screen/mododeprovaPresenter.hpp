#ifndef MODODEPROVAPRESENTER_HPP
#define MODODEPROVAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class mododeprovaView;

class mododeprovaPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    mododeprovaPresenter(mododeprovaView& v);

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

    virtual ~mododeprovaPresenter() {}

private:
    mododeprovaPresenter();

    mododeprovaView& view;
};

#endif // MODODEPROVAPRESENTER_HPP

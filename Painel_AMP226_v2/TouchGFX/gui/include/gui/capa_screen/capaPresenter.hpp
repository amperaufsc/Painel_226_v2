#ifndef CAPAPRESENTER_HPP
#define CAPAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class capaView;

class capaPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    capaPresenter(capaView& v);

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

    virtual ~capaPresenter() {}

private:
    capaPresenter();

    capaView& view;
};

#endif // CAPAPRESENTER_HPP

#ifndef TESTEPRESENTER_HPP
#define TESTEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class testeView;

class testePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    testePresenter(testeView& v);

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

    virtual ~testePresenter() {}

private:
    testePresenter();

    testeView& view;
};

#endif // TESTEPRESENTER_HPP

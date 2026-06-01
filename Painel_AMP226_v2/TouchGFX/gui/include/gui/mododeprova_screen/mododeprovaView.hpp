#ifndef MODODEPROVAVIEW_HPP
#define MODODEPROVAVIEW_HPP

#include <gui_generated/mododeprova_screen/mododeprovaViewBase.hpp>
#include <gui/mododeprova_screen/mododeprovaPresenter.hpp>

class mododeprovaView : public mododeprovaViewBase
{
public:
    mododeprovaView();
    virtual ~mododeprovaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MODODEPROVAVIEW_HPP

#ifndef CAPAVIEW_HPP
#define CAPAVIEW_HPP

#include <gui_generated/capa_screen/capaViewBase.hpp>
#include <gui/capa_screen/capaPresenter.hpp>

class capaView : public capaViewBase
{
public:
    capaView();
    virtual ~capaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CAPAVIEW_HPP

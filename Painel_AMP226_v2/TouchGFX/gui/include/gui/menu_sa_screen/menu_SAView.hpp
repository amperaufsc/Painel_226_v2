#ifndef MENU_SAVIEW_HPP
#define MENU_SAVIEW_HPP

#include <gui_generated/menu_sa_screen/menu_SAViewBase.hpp>
#include <gui/menu_sa_screen/menu_SAPresenter.hpp>

class menu_SAView : public menu_SAViewBase
{
public:
    menu_SAView();
    virtual ~menu_SAView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MENU_SAVIEW_HPP

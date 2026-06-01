#ifndef TESTEVIEW_HPP
#define TESTEVIEW_HPP

#include <gui_generated/teste_screen/testeViewBase.hpp>
#include <gui/teste_screen/testePresenter.hpp>

class testeView : public testeViewBase
{
public:
    testeView();
    virtual ~testeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TESTEVIEW_HPP

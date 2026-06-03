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
    void updateRPM(int rpm);
    void updateTempInversor(int temp);
    void updateTempAcc(int temp);
    void updateSOC(int soc);
    void updateFreio(int freio);
    void updateAcelerador(int acelera);
    void updateVelocidade(int vel);
    void updateDistancia(int metros);
protected:
};

#endif // MODODEPROVAVIEW_HPP

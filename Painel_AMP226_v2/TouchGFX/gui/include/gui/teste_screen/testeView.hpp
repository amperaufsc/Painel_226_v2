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
    	virtual void updateFalhaTMS(int falha);
        virtual void updateFalhaECU(int falha);
        virtual void updateFalhaINV(int falha);
        virtual void RTDbotao(int rtd);
        virtual void updateSOC(int soc);
        virtual void updateRPM(int rpm);
        virtual void updateTempMotor(int temp);
        virtual void updateTempInversor(int temp);
        virtual void updateTempAcc(int temp);
        virtual void updateCorrenteHV(float corrente);
        virtual void updateCorrenteInv(float corrente);
        virtual void updateTensaoHV(float tesao);
        virtual void updateTensaoInversor(float tesao);
        virtual void updateTensaoCelulaMin(int tesao);
        virtual void updateTensaoCelulaMax(int tesao);
protected:
};

#endif // TESTEVIEW_HPP

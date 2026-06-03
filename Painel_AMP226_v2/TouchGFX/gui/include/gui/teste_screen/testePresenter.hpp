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
private:
    testePresenter();

    testeView& view;
};

#endif // TESTEPRESENTER_HPP

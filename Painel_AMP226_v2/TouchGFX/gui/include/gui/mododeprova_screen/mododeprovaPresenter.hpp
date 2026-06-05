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

	//*mesma classe do modellistener o que faz com que consiga pegar de modellistener.hhp*//
	//* como é declarada uma funcao vazia eu reescrevo com override*//
    virtual ~mododeprovaPresenter() {}
    	virtual void updateRPM(int rpm) override;
        virtual void updateTempInversor(int temp) override;
        virtual void updateTempAcc(int temp) override;
        virtual void updateSOC(int soc) override;
        virtual void updateFreio(int freio) override;
        virtual void updateAcelerador(int acelera) override;
        virtual void updateVelocidade(int vel) override;
        virtual void updateDistancia(int metros) override;

        //botoes
        virtual void Botao1(int bn1) override;
        virtual void Botao2(int bn2) override;
        virtual void Botao3(int bn3) override;

private:
    mododeprovaPresenter();

    mododeprovaView& view;
};

#endif // MODODEPROVAPRESENTER_HPP

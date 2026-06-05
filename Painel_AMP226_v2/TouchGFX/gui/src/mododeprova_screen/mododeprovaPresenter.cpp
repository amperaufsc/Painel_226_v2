#include <gui/mododeprova_screen/mododeprovaView.hpp>
#include <gui/mododeprova_screen/mododeprovaPresenter.hpp>
#include <gui/common/FrontendApplication.hpp>

mododeprovaPresenter::mododeprovaPresenter(mododeprovaView& v)
    : view(v)
{

}

void mododeprovaPresenter::activate()
{

}

void mododeprovaPresenter::deactivate()
{

}

//botoes de controle
void mododeprovaPresenter::Botao1(int bn1)
{

}

void mododeprovaPresenter::Botao2(int bn2)
{
	if (bn2 == 1){
		static_cast<FrontendApplication*>(Application::getInstance())->gotocapaScreenBlockTransition();
	}
}

void mododeprovaPresenter::Botao3(int bn3)
{

}

void mododeprovaPresenter::updateRPM(int rpm)
{
    view.updateRPM(rpm);
}
void mododeprovaPresenter::updateVelocidade(int vel)
{
    view.updateVelocidade(vel);
}
void mododeprovaPresenter::updateTempInversor(int temp)
{
    view.updateTempInversor(temp);
}
void mododeprovaPresenter::updateTempAcc(int temp)
{
    view.updateTempAcc(temp);
}
void mododeprovaPresenter::updateSOC(int soc)
{
    view.updateSOC(soc);
}
void mododeprovaPresenter::updateDistancia(int metros)
{
    view.updateDistancia(metros);
}
void mododeprovaPresenter::updateFreio(int freio)
{
    view.updateFreio(freio);
}
void mododeprovaPresenter::updateAcelerador(int acelera)
{
    view.updateAcelerador(acelera);
}

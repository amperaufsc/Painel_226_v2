#include <gui/menu_sa_screen/menu_SAView.hpp>
#include <gui/menu_sa_screen/menu_SAPresenter.hpp>

menu_SAPresenter::menu_SAPresenter(menu_SAView& v)
    : view(v)
{

}

void menu_SAPresenter::activate()
{
	model->idpagina(3);
}

void menu_SAPresenter::deactivate()
{

}


//botoes de controle
void menu_SAPresenter::Botao1(int bn1)
{

}

void menu_SAPresenter::Botao2(int bn2)
{
	if (bn2 == 1){
		static_cast<FrontendApplication*>(Application::getInstance())->gotocapaScreenBlockTransition();
	}
}

void menu_SAPresenter::Botao3(int bn3)
{

}

#include <gui/teste_screen/testeView.hpp>
#include <gui/teste_screen/testePresenter.hpp>

testePresenter::testePresenter(testeView& v)
    : view(v)
{

}

void testePresenter::activate()
{

}

void testePresenter::deactivate()
{

}

void testePresenter::updateFalhaTMS(int falha)
{
    view.updateFalhaTMS(falha);
}

void testePresenter::updateFalhaECU(int falha)
{
    view.updateFalhaECU(falha);
}

void testePresenter::updateFalhaINV(int falha)
{
    view.updateFalhaINV(falha);
}

void testePresenter::RTDbotao(int rtd)
{
    view.RTDbotao(rtd);
}

void testePresenter::updateSOC(int soc)
{
    view.updateSOC(soc);
}

void testePresenter::updateRPM(int rpm)
{
    view.updateRPM(rpm);
}

void testePresenter::updateTempMotor(int temp)
{
    view.updateTempMotor(temp);
}

void testePresenter::updateTempInversor(int temp)
{
    view.updateTempInversor(temp);
}

void testePresenter::updateTempAcc(int temp)
{
    view.updateTempAcc(temp);
}

void testePresenter::updateCorrenteHV(float corrente)
{
    view.updateCorrenteHV(corrente);
}

void testePresenter::updateCorrenteInv(float corrente)
{
    view.updateCorrenteInv(corrente);
}

void testePresenter::updateTensaoHV(float tesao)
{
    view.updateTensaoHV(tesao);
}

void testePresenter::updateTensaoInversor(float tesao)
{
    view.updateTensaoInversor(tesao);
}

void testePresenter::updateTensaoCelulaMin(int tesao)
{
    view.updateTensaoCelulaMin(tesao);
}

void testePresenter::updateTensaoCelulaMax(int tesao)
{
    view.updateTensaoCelulaMax(tesao);
}

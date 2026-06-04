#include <gui/teste_screen/testeView.hpp>

testeView::testeView()
{

}

void testeView::setupScreen()
{
    testeViewBase::setupScreen();
}

void testeView::tearDownScreen()
{
    testeViewBase::tearDownScreen();
}
void testeView::updateFalhaTMS(int falha)
{
    Unicode::snprintf(falhatmsuniBuffer, FALHATMSUNI_SIZE, "%d", falha);
    falhatmsuni.invalidate();
}

void testeView::updateFalhaECU(int falha)
{
    Unicode::snprintf(falhaecuuniBuffer, FALHAECUUNI_SIZE, "%d", falha);
    falhaecuuni.invalidate();
}

void testeView::updateFalhaINV(int falha)
{
    Unicode::snprintf(falhainvuniBuffer, FALHAINVUNI_SIZE, "%d", falha);
    falhainvuni.invalidate();
}

void testeView::RTDbotao(int rtd)
{

}

void testeView::updateSOC(int soc)
{
    Unicode::snprintf(socuniBuffer, SOCUNI_SIZE, "%d", soc);
    socuni.invalidate();
}

void testeView::updateRPM(int rpm)
{
    Unicode::snprintf(rpmuniBuffer, RPMUNI_SIZE, "%d", rpm);
    rpmuni.invalidate();
}

void testeView::updateTempMotor(int temp)
{
    Unicode::snprintf(tempmotoruniBuffer, TEMPMOTORUNI_SIZE, "%d", temp);
    tempmotoruni.invalidate();
}

void testeView::updateTempInversor(int temp)
{
    Unicode::snprintf(tempinvuniBuffer, TEMPINVUNI_SIZE, "%d", temp);
    tempinvuni.invalidate();
}

void testeView::updateTempAcc(int temp)
{
    Unicode::snprintf(tempaccuniBuffer, TEMPACCUNI_SIZE, "%d", temp);
    tempaccuni.invalidate();
}

void testeView::updateCorrenteHV(float corrente)
{
    Unicode::snprintfFloat(correntehvuniBuffer, CORRENTEHVUNI_SIZE, "%.1f", corrente);
    correntehvuni.invalidate();
}

void testeView::updateCorrenteInv(float corrente)
{
    Unicode::snprintfFloat(correnteinvuniBuffer, CORRENTEINVUNI_SIZE, "%.1f", corrente);
    correnteinvuni.invalidate();
}

void testeView::updateTensaoHV(float tesao)
{
    Unicode::snprintfFloat(tensaohvuniBuffer, TENSAOHVUNI_SIZE, "%.1f", tesao);
    tensaohvuni.invalidate();
}

void testeView::updateTensaoInversor(float tesao)
{
    Unicode::snprintfFloat(tensaoinvuniBuffer, TENSAOINVUNI_SIZE, "%.1f", tesao);
    tensaoinvuni.invalidate();
}

void testeView::updateTensaoCelulaMin(int tesao)
{
    Unicode::snprintf(tensaocelminuniBuffer, TENSAOCELMINUNI_SIZE, "%d", tesao);
    tensaocelminuni.invalidate();
}

void testeView::updateTensaoCelulaMax(int tesao)
{
    Unicode::snprintf(tensaocelmaxuniBuffer, TENSAOCELMAXUNI_SIZE, "%d", tesao);
    tensaocelmaxuni.invalidate();
}

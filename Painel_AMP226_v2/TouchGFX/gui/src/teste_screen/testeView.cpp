#include <gui/teste_screen/testeView.hpp>
#include <touchgfx/Color.hpp>

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

    if (falha != 0)
    {
        tmsok.setVisible(false);
        falhatmsuni.setVisible(true);
    }
    else
    {
        tmsok.setVisible(true);
        falhatmsuni.setVisible(false);
    }

    tmsok.invalidate();
    falhatmsuni.invalidate();
}

void testeView::updateFalhaECU(int falha)
{
    Unicode::snprintf(falhaecuuniBuffer, FALHAECUUNI_SIZE, "%d", falha);

    if (falha != 0)
    {
        ecuok.setVisible(false);
        falhaecuuni.setVisible(true);
    }
    else
    {
        ecuok.setVisible(true);
        falhaecuuni.setVisible(false);
    }

    ecuok.invalidate();
    falhaecuuni.invalidate();
}

void testeView::updateFalhaINV(int falha)
{
    Unicode::snprintf(falhainvuniBuffer, FALHAINVUNI_SIZE, "%d", falha);

    if (falha != 0)
    {
        invok.setVisible(false);
        falhainvuni.setVisible(true);
    }
    else
    {
        invok.setVisible(true);
        falhainvuni.setVisible(false);
    }

    invok.invalidate();
    falhainvuni.invalidate();
}

void testeView::RTDbotao(int rtd)
{
    if (rtd != 0)
    {
        rtdativado.setVisible(true);
        rtddesativado.setVisible(false);
    }
    else
    {
        rtdativado.setVisible(false);
        rtddesativado.setVisible(true);
    }

    rtdativado.invalidate();
    rtddesativado.invalidate();
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

	    if (temp < 20)
	    {

	        tempaccuni.setColor(touchgfx::Color::getColorFromRGB(92,198,208));
	    }
	    else if (temp > 40)
	    {

	        tempaccuni.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
	    }
	    else
	    {

	        tempaccuni.setColor(touchgfx::Color::getColorFromRGB(0, 255, 0));
	    }


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
    valTensaoMin = (float)tesao / 10.0f;

    Unicode::snprintfFloat(tensaocelminuniBuffer, TENSAOCELMINUNI_SIZE, "%.1f", valTensaoMin);

    float diferenca = valTensaoMax - valTensaoMin;
    if (diferenca < 0) diferenca = -diferenca;

    if (diferenca >= 0.5f)
    {
        tensaocelminuni.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
        tensaocelmaxuni.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    }
    else
    {
        tensaocelminuni.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
        tensaocelmaxuni.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    }

    tensaocelminuni.invalidate();
    tensaocelmaxuni.invalidate();
}

void testeView::updateTensaoCelulaMax(int tesao)
{
    valTensaoMax = (float)tesao / 10.0f;

    Unicode::snprintfFloat(tensaocelmaxuniBuffer, TENSAOCELMAXUNI_SIZE, "%.1f", valTensaoMax);

    float diferenca = valTensaoMax - valTensaoMin;
    if (diferenca < 0) diferenca = -diferenca;

    if (diferenca >= 0.5f)
    {
        tensaocelminuni.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
        tensaocelmaxuni.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    }
    else
    {
        tensaocelminuni.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
        tensaocelmaxuni.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    }

    tensaocelminuni.invalidate();
    tensaocelmaxuni.invalidate();
}

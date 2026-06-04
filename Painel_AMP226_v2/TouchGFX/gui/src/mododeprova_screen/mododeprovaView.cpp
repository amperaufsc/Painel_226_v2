#include <gui/mododeprova_screen/mododeprovaView.hpp>
#include <touchgfx/Color.hpp>

mododeprovaView::mododeprovaView()
{

}

void mododeprovaView::setupScreen()
{
    mododeprovaViewBase::setupScreen();
}

void mododeprovaView::tearDownScreen()
{
    mododeprovaViewBase::tearDownScreen();
}
void mododeprovaView::updateRPM(int valor_rpm)
{
    if (valor_rpm < 1000) {
        rotacaouni.setColor(touchgfx::Color::getColorFromRGB(222, 34, 110));
    }
    else if (valor_rpm >= 1000 && valor_rpm < 2000) {
        rotacaouni.setColor(touchgfx::Color::getColorFromRGB(64, 126, 147));
    }
    else if (valor_rpm >= 2000 && valor_rpm < 2850) {
        rotacaouni.setColor(touchgfx::Color::getColorFromRGB(92, 198, 208));
    }
    else if (valor_rpm >= 2850 && valor_rpm < 3150) {
        rotacaouni.setColor(touchgfx::Color::getColorFromRGB(0, 255, 0));
    }
    else if (valor_rpm >= 3150 && valor_rpm < 4000) {
        rotacaouni.setColor(touchgfx::Color::getColorFromRGB(255, 255, 0));
    }
    else if (valor_rpm >= 4000 && valor_rpm <= 5000) {
        rotacaouni.setColor(touchgfx::Color::getColorFromRGB(222, 34, 110));
    }
    else {
        rotacaouni.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    }

    // Atualiza o texto do RPM
    Unicode::snprintf(rotacaouniBuffer, ROTACAOUNI_SIZE, "%d", valor_rpm);
    rotacaouni.invalidate();

    // Atualiza a barra/indicador gráfico do RPM
    rotacao.setValue(valor_rpm);
    rotacao.invalidate();
}

void mododeprovaView::updateVelocidade(int vel)
{
    Unicode::snprintf(velocidadeuniBuffer, VELOCIDADEUNI_SIZE, "%d", vel);
    velocidadeuni.invalidate();

    velocimetro.setValue(vel);
    velocimetro.invalidate();
}

void mododeprovaView::updateSOC(int soc)
{
	Unicode::snprintf(socuniBuffer, SOCUNI_SIZE, "%d", soc);
	socuni.invalidate();

    bateria.setValue(soc);
    bateria.invalidate();
}

void mododeprovaView::updateFreio(int valor_freio)
{
	Unicode::snprintf(freiouniBuffer, FREIOUNI_SIZE, "%d", valor_freio);
	freiouni.invalidate();

	freiobar.setValue(valor_freio);
	freiobar.invalidate();
}

void mododeprovaView::updateAcelerador(int acelera)
{
	Unicode::snprintf(aceleradoruniBuffer, ACELERADORUNI_SIZE, "%d", acelera);
	aceleradoruni.invalidate();

	aceleradorbar.setValue(acelera);
	aceleradorbar.invalidate();
}

void mododeprovaView::updateTempInversor(int val)
{
    Unicode::snprintf(tempinvuniBuffer, TEMPINVUNI_SIZE, "%d", val);
    tempinvuni.invalidate();
}

void mododeprovaView::updateTempAcc(int temp)
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

void mododeprovaView::updateDistancia(int metros)
{
    Unicode::snprintf(distanciauniBuffer, DISTANCIAUNI_SIZE, "%d", metros);
    distanciauni.invalidate();
}

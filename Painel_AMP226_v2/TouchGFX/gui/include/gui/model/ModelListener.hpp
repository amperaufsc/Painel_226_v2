#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include <gui/model/Model.hpp>
#include <stdint.h>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    //Falhas
    virtual void RTDativo(uint8_t estado) {}
    virtual void updateFalhaTMS(uint8_t falha) {}
    virtual void updateFalhaECU(uint16_t falha) {}
    virtual void updateFalhaINV(uint8_t falha) {}

    // Motor, Inversor e acumulador
    virtual void updateRPM(uint16_t rpm) {}
    virtual void updateTempMotor(uint16_t temp) {}
    virtual void updateTempInversor(uint16_t temp) {}
    virtual void updateTempAcc(uint8_t temp) {}
    virtual void updateSOC(uint8_t soc) {}

    // Corrente e Tensão
    virtual void updateCorrenteHV(float corrente) {}
    virtual void updateCorrenteInv(float corrente) {}
    virtual void updateTensaoHV(float tensao) {}
    virtual void updateTensaoInversor(float tensao) {}
    virtual void updateTensaoCelulaMin(uint8_t tensao) {}
    virtual void updateTensaoCelulaMax(uint8_t tensao) {}

    //
    virtual void updateAcelerador(uint8_t acc) {}
    virtual void updateFreio(uint8_t freio) {}


protected:
    Model* model;
};
#endif // MODELLISTENER_HPP

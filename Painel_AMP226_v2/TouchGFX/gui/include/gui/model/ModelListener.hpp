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
    virtual void RTDbotao(int rtd) {}
    virtual void updateFalhaTMS(int falha) {}
    virtual void updateFalhaECU(int falha) {}
    virtual void updateFalhaINV(int falha) {}

    // Motor, Inversor e acumulador
    virtual void updateRPM(int rpm) {}
    virtual void updateTempMotor(int temp) {}
    virtual void updateTempInversor(int temp) {}
    virtual void updateTempAcc(int temp) {}
    virtual void updateSOC(int soc) {}

    // Corrente e Tensão
    virtual void updateCorrenteHV(float corrente) {}
    virtual void updateCorrenteInv(float corrente) {}
    virtual void updateTensaoHV(float tesao) {}
    virtual void updateTensaoInversor(float tesao) {}
    virtual void updateTensaoCelulaMin(int tesao) {}
    virtual void updateTensaoCelulaMax(int tesao) {}

    //
    virtual void updateAcelerador(int acelera) {}
    virtual void updateFreio(int freio) {}
    virtual void updateVelocidade(int vel) {}
    virtual void updateDistancia(int metros) {}

protected:
    Model* model;
};
#endif // MODELLISTENER_HPP

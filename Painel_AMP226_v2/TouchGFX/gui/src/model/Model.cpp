#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "cmsis_os2.h"
#include "stm32u5xx_hal.h"
#include <string.h>

typedef struct {
    uint32_t id;
    uint8_t data[8];
} CAN_Message_t;

extern "C" osMessageQueueId_t fila_msg_canHandle;

extern "C" {
    extern uint8_t falha_inversor;
    extern uint8_t readtodrive_led;
    extern uint8_t falha_tms;
    extern uint16_t falha_ecu;

    extern uint8_t tensao_cel_min;
    extern uint8_t tensao_cel_max;
    extern uint8_t soc;
    extern uint8_t acelerador;
    extern uint8_t freio;
    extern uint8_t temperatura_acc;

    extern float correnteHV;
    extern float corrente_inv;

    extern uint16_t rpm;
    extern uint16_t temperatura_motor;
    extern uint16_t temperatura_inv;

    extern float tensao_inv;
    extern float tensaoHV;
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

	CAN_Message_t msg_recebida;

		while (osMessageQueueGet(fila_msg_canHandle, &msg_recebida, NULL, 0) == osOK)
		{
			switch (msg_recebida.id)
			{
			case 0x120: {
							falha_inversor = msg_recebida.data[0];
							readtodrive_led = msg_recebida.data[3];
							falha_tms = msg_recebida.data[4];
							falha_ecu = ((uint16_t)msg_recebida.data[1] << 8) | msg_recebida.data[2];
							if (readtodrive_led == 3) {  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
							} else { HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET);}

							modelListener->RTDativo(readtodrive_led);
							modelListener->updateFalhaTMS(falha_tms);
							modelListener->updateFalhaECU(falha_ecu);
							modelListener->updateFalhaINV(falha_inversor);

							break;
						 }
			case 0x121: {
							tensao_cel_min = msg_recebida.data[0];
							tensao_cel_max = msg_recebida.data[2];
							soc = msg_recebida.data[3];
							acelerador = msg_recebida.data[4];
							freio = msg_recebida.data[5];
							temperatura_acc = msg_recebida.data[7];

							modelListener->updateTensaoCelulaMin(tensao_cel_min);
							modelListener->updateTensaoCelulaMax(tensao_cel_max);
							modelListener->updateSOC(soc);
							modelListener->updateAcelerador(acelerador);
							modelListener->updateFreio(freio);
							modelListener->updateTempAcc(temperatura_acc);
							break;
						}
			case 0x220: {
							correnteHV = 0.0f; //acumulador
							corrente_inv = 0.0f; //inversor

							memcpy(&correnteHV, &msg_recebida.data[4], sizeof(float));
							memcpy(&corrente_inv, &msg_recebida.data[0], sizeof(float));
							modelListener->updateCorrenteHV((float)correnteHV);
							modelListener->updateCorrenteInv((float)corrente_inv);
							break;
						}
			case 0x420: {
							rpm = ((uint16_t)msg_recebida.data[0] << 8) | msg_recebida.data[1];
							temperatura_motor = ((uint16_t)msg_recebida.data[2] << 8) | msg_recebida.data[3];
							temperatura_inv = ((uint16_t)msg_recebida.data[6] << 8) | msg_recebida.data[7];

							modelListener->updateRPM(rpm);
							modelListener->updateTempMotor(temperatura_motor);
							modelListener->updateTempInversor(temperatura_inv);
							break;
						}
			case 0x421: {
							tensao_inv = 0.0f; //trifasico
							tensaoHV = 0.0f; //acumulador

							memcpy(&tensao_inv, &msg_recebida.data[0], sizeof(float));
							memcpy(&tensaoHV, &msg_recebida.data[4], sizeof(float));

							modelListener->updateTensaoHV((float)tensaoHV);
							modelListener->updateTensaoInversor((float)tensao_inv);
							break;
						}
			}
		}
}

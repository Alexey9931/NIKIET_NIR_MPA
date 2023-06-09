#ifndef __ADC_H
#define __ADC_H

#include <MDR1986BE4.h>
#include <MDR32F9Qx_adc.h>
#include <MDR32F9Qx_port.h>
#include <MDR32F9Qx_rst_clk.h>
#include <stdint.h>
#include "string.h"
#include "UART.h"

//#define KALIBR 1222
#define ADC_Channels_Number 8
#define ADC_Mesures_Number 100

void Delay(int waitTicks);
void ADCInit(void);
void ADC_Channel_Init(void);
void ADC_start_mesuare(void);
void ADC_IRQHandler(void);
float averaging(float *U);
uint32_t averaging_result(uint32_t RESULT[]);

#endif /*__ADC_H */
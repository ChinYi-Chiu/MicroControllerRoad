#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "bsp_led.h"
void LED_GPIO_Config(void)
{
		GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(LEDA_GPIO_CLK, ENABLE);
    GPIO_InitStructure.GPIO_Pin = LEDA_GPIO_PIN;
		GPIO_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	  GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
		GPIO_Init(LEDA_GPIO_PORT, &GPIO_InitStructure);
		GPIO_SetBits(LEDA_GPIO_PORT,LEDA_GPIO_PIN);
	
    RCC_APB2PeriphClockCmd(LEDB_GPIO_CLK, ENABLE);
    GPIO_InitStructure.GPIO_Pin = LEDB_GPIO_PIN;
		GPIO_InitStructure.GPIO_Mode= GPIO_Mode_Out_PP;
	  GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
		GPIO_Init(LEDB_GPIO_PORT, &GPIO_InitStructure);
		GPIO_SetBits(LEDB_GPIO_PORT,LEDB_GPIO_PIN);
	
}

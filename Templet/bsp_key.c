#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "bsp_key.h"

void Key_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(KEYA_GPIO_CLK,ENABLE);
	GPIO_InitStructure.GPIO_Pin=KEYA_GPIO_PIN;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IN_FLOATING;
	GPIO_Init(KEYA_GPIO_PORT,&GPIO_InitStructure);
}
	
u8 Key_Scan(GPIO_TypeDef* GPIOx,u16 GPIO_Pin)
{
	if(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin==KEY_ON))
	{
		while(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin==KEY_ON));
		return KEY_ON;
 	}else
		return KEY_OFF;
}

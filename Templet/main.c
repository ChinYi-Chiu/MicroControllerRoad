#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_key.h"
#define SOFT_DELAY Delay(0xFFFFF);
void Delay(__IO u32 nCount);

/**
	*@brief main function
	*@param non
	*@retval non
	*/


int main()
{
	LED_GPIO_Config();
	
	Key_GPIO_Config();
	
	while(1)
	{
		/*
		if(Key_Scan(KEYA_GPIO_PORT,KEYA_GPIO_PIN)==KEY_ON)
		{
			LEDA_ON;
			LEDB_OFF;
		}
		if(Key_Scan(KEYA_GPIO_PORT,KEYA_GPIO_PIN)==KEY_OFF)
		{
			LEDB_ON;
			LEDA_OFF;
		}
		*/
		LEDA_ON;
		SOFT_DELAY;
		LEDA_OFF;
		SOFT_DELAY;
		LEDB_TOGGLE;	
		
	}
}

void Delay(__IO u32 nCount)
{
	for (; nCount != 0; nCount--);
}

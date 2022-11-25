#include "stm32f10x.h"
#define KEYA_GPIO_CLK RCC_APB2Periph_GPIOA
#define KEYA_GPIO_PORT GPIOA
#define KEYA_GPIO_PIN GPIO_Pin_0

#define KEY_ON 1
#define KEY_OFF 0
void Key_GPIO_Config(void);
u8 Key_Scan(GPIO_TypeDef* GPIOx,u16 GPIO_Pin);

#define LEDA_GPIO_PORT GPIOC
#define LEDA_GPIO_CLK RCC_APB2Periph_GPIOC
#define LEDA_GPIO_PIN GPIO_Pin_13

#define LEDB_GPIO_PORT GPIOC
#define LEDB_GPIO_CLK RCC_APB2Periph_GPIOC
#define LEDB_GPIO_PIN GPIO_Pin_14


#define digitalHi(p,i) {p->BSRR=i;}
#define digitalLow(p,i) {p->BRR=i;}
#define digitalToggle(p,i) {p->ODR ^=i;}

#define LEDA_TOGGLE digitalToggle(LEDA_GPIO_PORT,LEDA_GPIO_PIN)
#define LEDA_ON digitalHi(LEDA_GPIO_PORT,LEDA_GPIO_PIN)
#define LEDA_OFF digitalLow(LEDA_GPIO_PORT,LEDA_GPIO_PIN)

#define LEDB_TOGGLE digitalToggle(LEDB_GPIO_PORT,LEDB_GPIO_PIN)
#define LEDB_ON digitalHi(LEDB_GPIO_PORT,LEDB_GPIO_PIN)
#define LEDB_OFF digitalLow(LEDB_GPIO_PORT,LEDB_GPIO_PIN)
void LED_GPIO_Config(void);

/* Code to control onboard LEDs of STM32F4 discovery board with onboard push button */
/* Include header file of STM32F4 series microcontroller */
#include "stm32f4xx_hal.h"

/* Function protoypes to configure GPIO pins as digital output and digital input */
void Init_OnBoard_LEDs(void);
void configure_Button(void);
void Delay_ms(volatile int time_ms); //ms delay function

/* main code to call initialize functions, read state of push button and controlling LEDs */
int main(void)
{
Init_OnBoard_LEDs(); // calls LEDs GPIO pins initialization function
configure_Button(); // call Push button GPIO pins initialization function
GPIO_PinState state; // Define a enum struct which contain boolean states
   while(1)
   {

state = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0); // read state of push button and save it in "state" variable
 // if state is high, turn on  LEDs
    if(state)
	{
    	Delay_ms(2500);
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
Delay_ms(7500);
for(int k=0;k<11;k++){
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15|GPIO_PIN_13|GPIO_PIN_12, GPIO_PIN_SET);
Delay_ms(500);
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_15, GPIO_PIN_RESET);
Delay_ms(500);}

Delay_ms(4000);

for(int j=0;j<25;j++){
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15|GPIO_PIN_13|GPIO_PIN_12, GPIO_PIN_SET);
Delay_ms(125);
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15|GPIO_PIN_13|GPIO_PIN_12, GPIO_PIN_RESET);
Delay_ms(125);}
Delay_ms(6000);
for(int i=0;i<50;i++){
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15|GPIO_PIN_13|GPIO_PIN_12, GPIO_PIN_SET);
Delay_ms(62);
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15|GPIO_PIN_13|GPIO_PIN_12, GPIO_PIN_RESET);
Delay_ms(62);
}

	}
// if state is low, turn off LEDs
    else
       {
    	Delay_ms(1100);
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);
       }
   }
}

/* Function to configure PD12-PD15 pin of as digital output pins */
void Init_OnBoard_LEDs(void)
{
	 __HAL_RCC_GPIOD_CLK_ENABLE(); //Enable clock to GPIOD
	GPIO_InitTypeDef BoardLEDs; // declare a variable of type struct GPIO_InitTypeDef
	BoardLEDs.Mode = GPIO_MODE_OUTPUT_PP; // set pin mode to output
	BoardLEDs.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15; // select pins PD12-PD15
	HAL_GPIO_Init(GPIOD, &BoardLEDs); // initialize PD12-PD15 pins by passing port name and address of BoardLEDs struct
}

/* Function to configure PA0 pin of as adigital input pin */
void configure_Button(void)
{
	__HAL_RCC_GPIOA_CLK_ENABLE(); //Enable clock to GPIOA
	GPIO_InitTypeDef PushButton;  // declare a variable of type struct GPIO_InitTypeDef
	PushButton.Mode = GPIO_MODE_INPUT; // set pin mode to input
	PushButton.Pin = GPIO_PIN_0;  // select pin PA0 only
	PushButton.Pull = GPIO_NOPULL; // set no internal pull-up or pull-down resistor
	HAL_GPIO_Init(GPIOA, &PushButton); //  initialize PA0 pins by passing port name and address of PushButton struct
}

/* ms delay function */
void Delay_ms(volatile int time_ms)
{
	      int j;
        for(j = 0; j < time_ms*4000; j++)
            {}  /* excute NOP for 1ms */
}

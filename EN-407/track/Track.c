#include "Track.h"
#include "main.h"
#include "motor.h"

void Tracking(void)
{
while(1)
{
	 //Ç°½ø
	 //Ñ²Ïß
	 //×óÆ«
			if((HAL_GPIO_ReadPin(huidu13_GPIO_Port,huidu13_Pin)==0)&&(HAL_GPIO_ReadPin(huidu14_GPIO_Port,huidu14_Pin)==0)&&(HAL_GPIO_ReadPin(huidu15_GPIO_Port,huidu15_Pin)==0)) 
			{
	break;
			}
		 else if ((HAL_GPIO_ReadPin(huidu13_GPIO_Port,huidu13_Pin)==1)) 

		{
			TIM1->CCR1=30;
		  TIM1->CCR2=26;
			car_go_straight();
     HAL_Delay(3);
			TIM1->CCR1=30;
      TIM1->CCR2=20;
			car_go_straight();

		}
	  else if((HAL_GPIO_ReadPin(huidu15_GPIO_Port,huidu15_Pin)==1)) 
		
		{
			TIM1->CCR1=38;
		  TIM1->CCR2=20;
		  car_go_straight();
	    HAL_Delay(3);
		  TIM1->CCR1=30;
      TIM1->CCR2=20;
			car_go_straight();
			
		}


		//ÓÒÆ«
		  
      else
		 TIM1->CCR1=30;
     TIM1->CCR2=20;
	car_go_straight();
		 }
	 }
void Tracking1(void)
{
while(1)
{
	 //Ç°½ø
	 //Ñ²Ïß
	 //×óÆ«
		if ((HAL_GPIO_ReadPin(huidu13_GPIO_Port,huidu13_Pin)==1)) 

		{
			TIM1->CCR1=30;
		  TIM1->CCR2=20;
			car_go_straight();
     HAL_Delay(2);
			TIM1->CCR1=30;
      TIM1->CCR2=20;
			car_go_straight();
		
		}

		//ÓÒÆ«
		else  if((HAL_GPIO_ReadPin(huidu15_GPIO_Port,huidu15_Pin)==1)) 
		
		{
			TIM1->CCR1=32;
		  TIM1->CCR2=20;
		  car_go_straight();
	    HAL_Delay(3);
		  TIM1->CCR1=30;
      TIM1->CCR2=20;
			car_go_straight();
			
		}
			else	if ((HAL_GPIO_ReadPin(huidu11_GPIO_Port,huidu11_Pin)==1)&&(HAL_GPIO_ReadPin(huidu17_GPIO_Port,huidu17_Pin)==1)&&(HAL_GPIO_ReadPin(huidu21_GPIO_Port,huidu21_Pin)==1)&&(HAL_GPIO_ReadPin(huidu27_GPIO_Port,huidu27_Pin)==1)) 
			{
	break;
			}
      else
	car_go_straight();
		 }
 }

	 void Tracking2(void)
{
	while(1)
	{
		if ((HAL_GPIO_ReadPin(huidu23_GPIO_Port,huidu23_Pin)==1)&&(HAL_GPIO_ReadPin(huidu24_GPIO_Port,huidu24_Pin)==1)&&(HAL_GPIO_ReadPin(huidu25_GPIO_Port,huidu25_Pin)==1)) 
			{
	break;
			}
    else if ((HAL_GPIO_ReadPin(huidu23_GPIO_Port,huidu23_Pin)==1)) 

		{
			TIM1->CCR1=36;
		  TIM1->CCR2=20;
			car_go_after();
     HAL_Delay(3);
			TIM1->CCR1=30;
      TIM1->CCR2=20;
			car_go_after();
		
		}

		//ÓÒÆ«
		else  if((HAL_GPIO_ReadPin(huidu25_GPIO_Port,huidu25_Pin)==1)) 
		
		{
			TIM1->CCR1=30;
		  TIM1->CCR2=26;
		  car_go_after();
	    HAL_Delay(3);
		  TIM1->CCR1=30;
      TIM1->CCR2=20;
			car_go_after();
			

		}

      else
	car_go_after();
		 }
	 }
 void Tracking3(void)
 {
	 while(1)
	 {
	 car_go_left();
		 if((HAL_GPIO_ReadPin(huidu11_GPIO_Port,huidu11_Pin)==0)&&(HAL_GPIO_ReadPin(huidu17_GPIO_Port,huidu17_Pin)==0)&&(HAL_GPIO_ReadPin(huidu21_GPIO_Port,huidu21_Pin)==0)&&(HAL_GPIO_ReadPin(huidu27_GPIO_Port,huidu27_Pin)==0))
		 {
			 break;
		 }
	 }
	 
 }

#ifndef _LED_H
#define _LED_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK STM32F7������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2015/6/10
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	

#define LED_0_PORT  GPIOB
#define LED_0_PIN   GPIO_PIN_1
#define LED_1_PORT  GPIOB
#define LED_1_PIN   GPIO_PIN_0

//LED�˿ڶ���
#define LED0(n)		(n?HAL_GPIO_WritePin(LED_0_PORT,LED_0_PIN,GPIO_PIN_SET):HAL_GPIO_WritePin(LED_0_PORT,LED_0_PIN,GPIO_PIN_RESET))
#define LED0_Toggle (HAL_GPIO_TogglePin(LED_0_PORT, LED_0_PIN))
#define LED1(n)		(n?HAL_GPIO_WritePin(LED_1_PORT,LED_1_PIN,GPIO_PIN_SET):HAL_GPIO_WritePin(LED_1_PORT,LED_1_PIN,GPIO_PIN_RESET))
#define LED1_Toggle (HAL_GPIO_TogglePin(LED_1_PORT, LED_1_PIN))

void LED_Init(void);
#endif

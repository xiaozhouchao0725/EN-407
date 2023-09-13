#ifndef __TRACK_H_
#define __TRACK_H_

#include "main.h"
typedef struct {
	uint16_t id;
	GPIO_TypeDef *huidu11;
	uint16_t GPIO_Pin;
}huidu_t;

uint8_t huidu_check(huidu_t* sensor);
	
extern void Tracking(void);
extern void Tracking1(void);
extern void Tracking2(void);
extern void Tracking3(void);
#endif

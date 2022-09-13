
#ifndef SWITCH_H_
#define SWITCH_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/Interrupt/INTERRUPT.h"
#include "../../MCAL/STD_TYPES.h"

#define button 26

void button_init(u8 pin);
void button_status(u8 pin,u8 *reading);
void init_interrupt_traffic();
#endif /* SWITCH_H_ */
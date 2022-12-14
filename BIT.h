
#ifndef BIT_H_
#define BIT_H_

#define BIT_SET(byte,bit)   ((byte) |=  (1<<(bit)))
#define BIT_CLEAR(byte,bit) ((byte) &= ~(1<<(bit)))
#define READ_BIT(byte,bit) (((byte) & 1<<(bit)) >> (bit))
#define TOGGLE_BIT(byte,bit)  ((byte) ^=  (1<<(bit)))



#endif /** BIT_H_ **/
#ifndef STACK_H_INCLUDED
#define stack_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include"main.h"

typedef unsigned char uint8_t;
typedef struct stack {
uint8_t elements[10];
char top;
}ST_stack_t;




void createEmptyStack(ST_stack_t *stack);
uint8_t push(ST_stack_t *stack, uint8_t data);
uint8_t printStack(ST_stack_t *stack);
uint8_t pop(ST_stack_t *stack, uint8_t *data);
uint8_t getStackTop(ST_stack_t *stack, uint8_t *topData);



#endif

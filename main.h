#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include "stack.h"
#include"balanced.h"

ST_stack_t stack;
ST_stack_t *ptr_stack=&stack;
uint8_t data,i;
char state,expression;
char* ptr_expression=&expression;
uint8_t *ptr_data=&data;
uint8_t topData;
uint8_t *ptr_topData=&topData;

#endif

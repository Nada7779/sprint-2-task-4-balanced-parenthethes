
#include "stack.h"
#include "main.h"
void createEmptyStack(ST_stack_t *stack){
for(int i=0;i<10;i++){
stack->elements[i]=0;}
stack->top=-1;
}
uint8_t push(ST_stack_t *stack, uint8_t data){
     if (stack->top==9) return -1;
     else {stack->top++; stack->elements[stack->top]=data; return 0;}
 }//returns -1 if the stack is full/returns 0 otherwise;
uint8_t printStack(ST_stack_t *stack){
 if (stack->top==-1) return -2;
 else if (stack->top==9) {
    for (int j=9;j>-1;j--){
    printf("%c\t",stack->elements[j]); }
    printf("\n");
    return -1;}
 else{
    uint8_t k=stack->top;
    int y;
    for (y=k;y>-1;y--){printf("%c\t",stack->elements[y]);}
    printf("\n");
    return 0;}
 }//returns -1 if the stack is full/returns -2 if the stack is empty/returns 0 otherwise
uint8_t pop(ST_stack_t *stack, uint8_t *data){
 if (stack->top==-1) return -2;
 else {*data=stack->elements[stack->top]; stack->top--; return 0;}
 }//returns -2 if the stack is empty/returns 0 otherwise;
uint8_t getStackTop(ST_stack_t *stack, uint8_t *topData){
  if (stack->top==-1) return -2;
  else {
        *topData=stack->elements[stack->top];
        printf("%c\n",*topData);
        return 0;}
}//returns -2 if the stack is empty/0 otherwise


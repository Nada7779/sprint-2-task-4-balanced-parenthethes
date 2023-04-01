
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "stack.h"
#include "balanced.h"
int main(){
createEmptyStack(ptr_stack);
push(ptr_stack,'1');
push(ptr_stack,'2');
push(ptr_stack,'a');
push(ptr_stack,'b');
push(ptr_stack,'!');
printStack(ptr_stack);
pop(ptr_stack,ptr_data);
getStackTop(ptr_stack,ptr_topData);
printStack(ptr_stack);
for (i=0;i<7;i++){
    printf("\nEnter element to push:");
    scanf(" %c",&data);
    push (ptr_stack,data);
}
getStackTop(ptr_stack,ptr_topData);
printStack(ptr_stack);
for (i=0;i<4;i++){
pop(ptr_stack,ptr_data);}
getStackTop(ptr_stack,ptr_topData);
printStack(ptr_stack);
for (i=0;i<7;i++){
pop(ptr_stack,ptr_data);}
getStackTop(ptr_stack,ptr_topData);
printStack(ptr_stack);

for (uint8_t y=0;y<10;y++){
printf ("\n\nEnter expression:");
scanf("%s",&expression);
state=isBalancedParanthethes(ptr_expression);
switch (state){
case 0:  printf("\nThe expression is balanced"); break;
case -1: printf("\nThe expression is not balanced"); break;
case -2: printf("\nThe expression doesn't include paranthethes"); break;}
}
}








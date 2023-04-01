#include "stack.h"
#include "balanced.h"
#include "main.h"
uint8_t matching_paranthethesis(uint8_t close,uint8_t open){
if (close==')'&&open=='(') return 1;
else if (close=='}'&&open=='{')  return 1;
else  return 0;
}


char isBalancedParanthethes(char *exp){
uint8_t length = strlen(exp);
uint8_t counter=0;
createEmptyStack(ptr_stack);

for(uint8_t c= 0; c<length; c++){
   if (exp[c]!='(' && exp[c]!='{'&&exp[c]!=')' && exp[c]!='}'){
    counter++;
   }}
if (counter==length) return -2;
for(uint8_t c= 0; c<length; c++){
   if( exp[c]=='(' || exp[c]=='{'){
      push(ptr_stack,exp[c]);}
   else if (exp[c]==')' || exp[c]=='}'){
    if (ptr_stack->top==-1) return -1;
    else {
        pop(ptr_stack,ptr_data);
        if(!matching_paranthethesis(exp[c],data)) return -1;
   }
   }
}
if (ptr_stack->top==-1) return 0;
else return -1;
}

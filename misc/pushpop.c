#include <stdio.h>

#define STACK_TYPE int
#define STACK_SIZE 100

static STACK_TYPE stack[ STACK_SIZE ];
static int top_element = -1;

int is_full(void);

void push(STACK_TYPE value){
	if( !is_full() ){
		top_element++;
		stack[top_element]= value;
	}
}

void pop(void){
	if (top_element != -1)
		top_element--;
}

STACK_TYPE pop_num(void){
	STACK_TYPE pop_val = stack[top_element];
	top_element--;
	return pop_val;
}

STACK_TYPE top(void){
	return stack[top_element];
}

int is_empty(void){
	return top_element == -1;
}

int is_full(void){
	return top_element == STACK_SIZE -1;
}

int main(){
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

sll_insert( register Node **linkp, in new_value){
	register Node *current;
	register Node *new;
	
	while( (current = *linkp) != NULL && current -> value < new_value )
		linkp = &current -> link;
	new = (Node *)malloc(sizeof(Node));
	if(new == NULL)
		return FALSE;
	new->value = new_value;
	new->link = current;
	*linkp = new;
	return TRUE;
}




int main(){
	return 0;
}

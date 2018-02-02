
#include <stdio.h>
#include <stdlib.h>
#include <singly_linked_list_node.h>

int sll_remove(struct NODE **rootp, struct NODE *node){
	Node *p;
	assert(node != NULL);
	p = *rootp;
	
	while(p!= NULL){
		if( p == node){
			p -> next = *rootp -> next;
			free(p);
			return 1;		
		}
	}
	return 0;
}

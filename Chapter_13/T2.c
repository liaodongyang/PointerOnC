#include <stdio.h>

typedef struct
{
	int a;
	int b;
} Node;

//Node *np;

void fo(Node *np){
	np->a = 5;
	np->b = 10;
	printf("a:%d, b:%d \n", np->a,np->b);
}

void slltran(Node *root, void (*func)(Node *)){
	//while(root != NULL){
		(*func)(root);
		printf("OK\n");
	//}
}

int main(){
	Node nb;
	nb.a = 3;
	nb.b = 6;
	Node *nbp = &nb;
	
	slltran(nbp, fo);
	//printf("a:%d, b:%d \n", np->a,np->b);
	return 0;
}

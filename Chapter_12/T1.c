#include <stdio.h>
#include <stdlib.h>

struct Cp{
	struct Cp *next;
};

struct Cp *addp(struct Cp *current){
	struct Cp *p;
	p = (struct Cp *)malloc(sizeof(struct Cp));
	if(p == NULL){
		return NULL;
	}
	//current = p -> next;
	p -> next = current;
	current = p;
	printf("New One Node\n");
	return current;
}

int countp(struct Cp *current){
	int cnt = 0;
	for( ; current != NULL; ){
		cnt++;
		current = current -> next;
	}
	//while(current != NULL){
	//	cnt++;
	//	current = current -> next;
	//}
	return cnt;
}

int main(){
	struct Cp *cur;
	cur = (struct Cp *)malloc(sizeof(struct Cp));
	if(cur == NULL)
		return 0;
	cur -> next = NULL;
	cur = addp(cur);
	cur = addp(cur);
	cur = addp(cur);
	int cnt = countp(cur);
	printf("%d\n", cnt);
	return 0;
}

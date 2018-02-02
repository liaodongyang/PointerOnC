#include <stdio.h>
#include <stdlib.h>

struct Cp{
	struct Cp *next;
	int v;
};

struct Cp *addp(struct Cp *current, int vv){
	struct Cp *p;
	p = (struct Cp *)malloc(sizeof(struct Cp));
	if(p == NULL){
		return NULL;
	}
	//current = p -> next;
	p -> next = current;
	p -> v = vv;
	current = p;
	printf("New One Node, value is %d\n", vv);
	return current;
}

void countp(struct Cp *current){
	//int cnt = 0;
	for( ; current != NULL; ){
		//cnt++;
		printf("%d, ", current -> v);
		current = current -> next;
	}
	//while(current != NULL){
	//	cnt++;
	//	current = current -> next;
	//}
	printf("\n");
	//return cnt;
}

struct Cp *findp(struct Cp *current){
	while(current != NULL){
		if(current -> v == 8){
			return current;
		}
		current = current -> next;
	}
	return NULL;
}

struct Cp *revere(struct Cp *first){
	if(first == NULL && first->next == NULL)
		return first;
	struct Cp *prev = first;
	struct Cp *cur = first -> next;
	struct Cp *temp = first -> next -> next;

	while(cur){
		temp = cur -> next;
		cur -> next = prev;
		prev = cur;
		cur = temp;
	}
	first -> next = NULL;
	return prev;

}

int main(){
	struct Cp *cur;
	cur = (struct Cp *)malloc(sizeof(struct Cp));
	if(cur == NULL)
		return 0;
	cur -> next = NULL;
	cur -> v = 5;
	cur = addp(cur,3);
	cur = addp(cur,7);
	cur = addp(cur,8);
	countp(cur);
	cur = revere(cur);
	countp(cur);
	//int cnt = countp(cur);
	//cur = findp(cur);

	//printf("%d\n", cur -> v);
	return 0;
}

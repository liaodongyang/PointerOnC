#include <stdio.h>

typedef struct {
	int x;
	int y;
} Point;

int main(){
	Point p;
	p.x = 2;
	p.y = 3;
	Point *a = &p;
	Point **b = &a;
	printf("a is %u \n" , a);
	printf("a is %u \n" , *a);
	printf("a is %u \n" , a->x);
	printf("a is %u \n" , b);
	//printf("a is %u \n" , b->a);
	//printf("a is %u \n" , b->x);
	printf("a is %u \n" , *b);
	//printf("a is %u \n" , *b->x);
	//printf("a is %u \n" , b->a->x);
	//printf("a is %u \n" , (*b)->a);
	printf("a is %u \n" , (*b)->x);
	printf("a is %u \n" , **b);
	return 0;
}

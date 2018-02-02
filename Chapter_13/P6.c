#include <stdio.h>

typedef struct {
	int x;
	int y;
} Point;

int main(){
	Point x, y;
	y.x = 2;
	y.y = 3;
	Point *a = &x;
	Point *b = &y;
	x = y;
	//a = y;
	printf("a is %u \n" , x.x);
	printf("a is %u \n" , x.y);
	//printf("a is %u \n" , a->x);
	a = b;
	printf("a is %u \n" , a->y);
	//a = *b;
	//printf("a is %u \n" , b->a);
	//printf("a is %u \n" , b->x);
	//printf("a is %u \n" , a->x);
	*a = *b;
	printf("a is %u \n" , *b);
	//printf("a is %u \n" , b->a->x);
	//printf("a is %u \n" , (*b)->a);
	//printf("a is %u \n" , (*b)->x);
	//printf("a is %u \n" , **b);
	return 0;
}

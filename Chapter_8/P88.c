
#include <stdio.h>

extern int a[10];
extern int *b;

void ok(){
	int x,y;
	x = a[3];
	y = b[3];
	printf("%d\n",x);
	printf("%d\n",y);
}

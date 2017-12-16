#include <stdio.h>
#include <limits.h>

int main(){
	int edge = 0;
	printf("all 1 is %d\n", ~edge);
	unsigned int uedge = 0;
	printf("unsigned all 1 is %u\n", ~uedge);
	int sizeofint = sizeof(int);
	printf("size of int is %d\n", sizeofint);
	printf("the value of intmax is %i\n", INT_MAX );
	printf("The value of intmin is %i\n", INT_MIN );

	return 0;
}

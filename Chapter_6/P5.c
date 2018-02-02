#include <stdio.h>


int main(){
	int i[10]= {0,1,2,3,4,5,6,7,8,9};
	int *p = &i[0];
	int offset = 3;
	p += 3;

	printf("%d\n", *p);
	return 0;
}

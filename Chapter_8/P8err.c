#include <stdio.h>
#include "P88.c"
extern void ok();

int main(){
	int a[10]={1,2,3,4,5,6};
	int *b = a;
	ok();
	return 0;
}

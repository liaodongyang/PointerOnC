#include <stdio.h>
#include <stdlib.h>

int main(){
	double i=strtol("12345", NULL,-5);
	printf("%f\n", i );
	return 0;
}

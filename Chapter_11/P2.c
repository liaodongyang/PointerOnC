#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){
	char *p;
	p = malloc(5000 * sizeof(char));
	printf("%u\n", malloc_usable_size(p));
	
	return 0;
}

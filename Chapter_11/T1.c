#include <stdio.h>
#include <stdlib.h>

void *mycalloc(size_t n, size_t size){
	int i;
	n = n * size;
	char *p = malloc(n);
	if(p == NULL)
		return NULL;
	for(i=0;i<n;i++){
		p[i] = 0;
	}
	return p;
}

int main(){
	return 0;
}

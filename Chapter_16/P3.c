#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	for(i = 0; i < 100; i += 1){
		printf("%d\n", rand()%2);
	}
	return 0;
}

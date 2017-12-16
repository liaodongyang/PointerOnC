#include <stdio.h>

void main(){
	char input[20];
	while(gets(input) != NULL){
		printf("input is %s\n", input);
	}
}

#include "stdio.h"
#include "stdlib.h"

void main(){
	char ch;
	int checksum = 0;
	int check;
	while(((ch = getchar()) != EOF) &&(ch != '\n')){
		printf("%c , ", ch);

		check = ch - '0';
		printf("%d \n", check);
		//check = atoi(ch);
		checksum =checksum + check;
	}
	printf("%d\n", checksum);

}

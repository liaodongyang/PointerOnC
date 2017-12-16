#include <stdio.h>
#include <string.h>

#define MAX 4096

void main(){

	char buffer[MAX];
	int i= 1;
	int line = 0;
	int longlen= 0;
	while(fgets(buffer,MAX,stdin) != NULL){
		//printf(buffer);
		//printf("1111");
		int len = strlen(buffer);
		//printf("%d   ", len);
		//printf("%d", i);
		if(len > longlen){
			longlen = len;
			line = i;
		}
		i++;
	}
	
	printf("longest line is %d , length is %d \n", line, longlen-1);

}

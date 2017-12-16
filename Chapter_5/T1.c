#include <stdio.h>


int main(){
	int ch;
	int up;
	while((ch = getchar()) != EOF){
		//printf("%X\n", ch);
		if(ch >= 65 && ch <=90 ){
			ch = ch | 0x20;
			printf("%c",ch); 
		}	
	}
	return 0;
}

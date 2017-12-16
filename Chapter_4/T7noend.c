#include <stdio.h>

void deblank(char string[]){
	char ch;
	int i = 0;
	int w = 0;
	while((ch=string[i]) !='\0'){
		printf("%c\n",ch);
		if ( ch == 0x20 ){
			w++;
			printf("count %d\n", w);
		}
		i++;

	}
}

int main(){
	char a[]= "looooop  on";
	deblank(a);
	return 0;	
}

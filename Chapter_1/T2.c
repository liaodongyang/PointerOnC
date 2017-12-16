#include <stdio.h>

int main(){
	char ch;
	int line = 0;
	int mline = 1;
	while((ch = getchar()) != EOF ){
		//line++;
		//mline = 1;
		//printf("%d. ", line);
		if(mline == 1) {
	 		//putchar(ch);
			line++;
			mline = 0;
			printf("%d.", line);
		}
		putchar(ch);
		if(ch == '\n'){
		    	mline=1 ;
		}
	}
	return 0;
}

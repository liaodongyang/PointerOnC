#include <stdio.h>

int count_chars(char const *str, char const *chars){
	int cc=0;
	for(;*chars != '\0'; chars++){
		char *strh = str;
		while( *strh != '\0' ){
			if( *strh == *chars){
				cc++;
			}
			strh++;
		}
	}
	return cc;
}

int main(){
	char *a = "youtube";
	char *b = "yu";
	int i = count_chars(a,b);
	printf("%d\n", i);
	return 0;
}

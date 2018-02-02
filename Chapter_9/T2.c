#include <stdio.h>

int my_strlen(char* str){
	if( str != NULL){
		int len=0;
		while( *str != '\0'){
			str++;
			len++;
		}
		return len;
	}
	return 0;
}

int main(){
	char a[]="goodforyou";
	int lent= my_strlen(a);
	printf("The length is %d\n", lent);
	return 0;
}

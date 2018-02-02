#include <stdio.h>

char *my_strcpy_end(char *dist, char *src){
	//while(*a != '\0'){
	//	printf("%c", *a);
	//	a++;	
	//}
	char *bdist= dist;
	while((*dist++ = *src++) != '\0'){
		//printf("%c\n", *bdist);
	}
		
	//printf("%s\n", bdist);
	return dist;
}

int main(){
	char a[]="youtube";
	char b[10];
	char *c = my_strcpy_end(b,a);
	printf("%s\n", c);
	return 0;
}

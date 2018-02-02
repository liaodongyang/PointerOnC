#include <stdio.h>

char* my_strcpy(char *dist, const char *src){
	char* r= dist;
	if(dist !=NULL && src != NULL){
		while((*r++ == *src++) != '\0')
			;
		return dist;
	}
	return NULL;
}

int main(){
	char a[]="good";
	char b[6];
	char *k = my_strcpy(b,a);
	printf("%s\n", b);
	return 0;
}

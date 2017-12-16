#include <stdio.h>

int substr(char dst[], char src[], int start, int len){
	int i = 0;
	int start1 = start;
	//printf("%s\n",src);
	for(  ; start <= start1 +len ; start++){
		dst[i]=src[start-1];
		//printf("OK");
		i++;
	}
	return 0;
}

int main(){
	char a[]= "ABCDEFGHIJKLMN";
	char b[10];
	substr(b,a,3,2);
	printf("%s\n",b);
	return 0;
}

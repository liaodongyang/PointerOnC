#include <stdio.h>
#include <string.h>

struct {
	int a;
	char b[10];
	float c;
}x;

int main(){
	x.a= 3;
	//x.b[0]= "hello";
	strcpy(x.b,"hello");	
	x.c= 0;
	printf("%s\n", x.b);
	return 0;
}

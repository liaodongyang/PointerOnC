#include <stdio.h>

char buffer[40];

int main(){
	char a[10]= "OK";
	sprintf(buffer, "%s", a);
	printf("%s", buffer);
	return 0;
}

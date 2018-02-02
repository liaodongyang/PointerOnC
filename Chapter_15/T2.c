#include <stdio.h>

#define  ptch(ch) do{putchar(ch); printf(" ");}while(0)

#define BS 81

int main(){
	//int ch;
	char buff[BS];
	while(gets(buff) != EOF)
		puts(buff);
	return 0;
}

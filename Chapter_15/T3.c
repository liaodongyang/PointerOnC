#include <stdio.h>

#define  ptch(ch) do{putchar(ch); printf(" ");}while(0)

#define BS 256

int main(){
	//int ch;
	char buff[BS];
	while(fgets(buff, BS, stdin) != NULL)
		fputs(buff,stdout);
	return 0;
}

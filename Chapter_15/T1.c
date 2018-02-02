#include <stdio.h>

#define  ptch(ch) do{putchar(ch); printf(" ");}while(0)

int main(){
	int ch;
	while((ch = getchar()) != EOF)
		ptch(ch);
	return 0;
}

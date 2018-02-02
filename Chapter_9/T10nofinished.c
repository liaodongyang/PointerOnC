#include <stdio.h>

int palindrome(char *string){
	char *fin = string;
	while(*fin++ == '\0')
		;
	fin--;
	while( *string == '\0'){
		if(*string != *fin)
			return 0;
		string++;
		fin--;
	}
	return 1;
	
}

int main(){
	char *st = "abccba";
	int k = palindrome(st);
	printf("%d\n",k);
	return 0;
}

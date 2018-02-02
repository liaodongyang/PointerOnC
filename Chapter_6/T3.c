#include <stdio.h>

void reverse_string(char *string){
	char *p = string;
	while(*p != '\0')
		p++;
	p--;
	//printf("%c\n",*p);
	while(string < p){
		char temp = *p;
		*p = *string;
		*string = temp;
		string++;
		p--;
	}
}

int main(){
	char st[10] = "dongyang";
	reverse_string(st);
	printf("%s\n",st);
	return 0;
}

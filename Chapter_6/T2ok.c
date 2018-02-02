#include <stdio.h>

char *match(char *str, char *want){
	while(*want != '\0'){
		
		if(*str++ != *want++){
			return NULL;
		}
	
	}
	return str;
}

int del_substr(char *str, char *substr){
	char *next;
	while(*str != '\0'){
		next = match(str, substr);
		//printf("%c", *next);
		if( next != NULL)
			break;
		str++;
	}

	if(*str == '\0')
		return 0;

	while(*str++ = *next++){
		
	}

	return 1;
}

int main(){
	// use array[]
	char st[10]= "dongyang";
	char *w="ong";

	int i = del_substr(st,w);
	if(i == 1){
		// %s string using adress st
		printf("%s\n", st);
	}
	return 0;
}

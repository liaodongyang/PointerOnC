#include <stdio.h>

int del_substr(char *str, char const *substr){
	char *p = str;
	char *ps;
	char *q;
	if(str != NULL){
		if(substr == NULL)
			return 1;
		while(*p != '\0'){
			q = substr;
			ps= p;
			while(*q != '\0'){
				if(*q++ != *ps++){
					break;
				}
			}
			if(*q == '\0'){
				while(*p++ = *ps++)
					;
				return 1;
			}
			p++;
		}	
	}
	return 0;
}

int main(){
	char st[10]= "dongyang";
	char *w="ong";

	int i = del_substr(st,w);
	if(i == 1){
		printf("OK");
	}
	return 0;
}

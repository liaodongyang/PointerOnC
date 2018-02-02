#include <stdio.h>

char *my_strrchr(char const *str, int ch){
	char *cj= NULL;
	while( *str != '\0'){
		if(*str == ch){
			cj = str;
		}
		str++;
	}
	if( cj == NULL)
		return 0;
	return cj;
}

int main(){
	char *c="youtube";
	char b='u';
	char *cc = my_strrchr(c,b);
	printf("%c\n", *cc);

	return 0;
}

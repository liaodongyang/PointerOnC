#include <stdio.h>

char *find_char(char *source, char *chars){
	char *p = source;
	char *cc;
	for(; *p != '\0'; p++ ){
		for(cc = chars ; *cc != '\0' ; cc++ ){
			if(*p == *cc){
				return p;
			}	
		}
	}
	return NULL;
}

int main(){
	char *src = "ABCDEF";
	char *c = "XRCQEF";
	char *po = find_char(src,c);
	printf("%c\n", *po);
	return 0;
}

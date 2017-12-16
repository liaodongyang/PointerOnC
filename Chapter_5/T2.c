#include <stdio.h>


int main(){
	int ch;
	int up;
	while((ch = getchar()) != EOF){
		//printf("%X\n", ch);
		if(ch >= 65 && ch <=77 ){
			ch = ch + 13;
			printf("%c",ch); 
		}else if(ch >= 78 && ch <=90){
			ch = ch - 13;
			printf("%c",ch);
		}else if(ch >= 97 && ch <= 109){
			ch = ch + 13;
			printf("%c", ch);
		}else if(ch >= 110 && ch <= 122){
			ch = ch -13;
			printf("%c", ch);
		}else{
			printf("%c", ch);
		}
	}
	return 0;
}

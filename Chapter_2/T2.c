#include <stdio.h>



int main(){
	int ch = 0;
	int i = 0;
	ch = getchar();
	if(ch == '}'){
		printf("unmatched!\n");
	}
	while( ch != EOF){
		printf("%c", ch);
		if(ch == '{') i++;
		if(ch == '}') i--;
		
		ch = getchar();
	}
	if(i==0){
		printf("matched!\n");
	}else{
		printf("unmatched!\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	char s[1024];
	char strall[32][1024];
	int ct = 0;
	while((gets(s))!= EOF){
		
		//printf("%s\n",s);
		strcpy(strall[ct],s);
		//printf("%s\n",strall[ct]);
		if( strcmp(s,"finished!")==0){
			printf("\n");
			break;
		}
		ct++;
	}

	for(int i= 0; i<= ct; i++){
		printf("%s\n",strall[i]);
	}

	return 0;
}

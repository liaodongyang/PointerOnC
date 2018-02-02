#include <stdio.h>

char *eratosthenes(int j){
	int kk = j+1;
	char nc[kk];
	printf("\n",j);
	//char *cn = nc;
	char *check = nc;
	for(int i=0; i<=j; i++){
		nc[i]='T';
		printf("%c", nc[i]);
	}
	printf("\n");
	
	int count=2, k;
	while(2*count <= j){
		k=count;
		for(int i=2; i*k<=j; i++){
			if(nc[i*k] =='T'){
				nc[i*k] = 'F';
				
			}			
		}
		count++;
	}
	//for(;*check != '\0'; check++)
	//	printf("%c", *check);
	
	return check;
}


int main(){
	char *ch=eratosthenes(50);
	int i = 0;
	for(;*ch != '\0'; ch++){

		if(*ch == 'T')
			printf("%d\n", i);
		i++;
	}
	//printf("%c\n", *ncc);
	return 0;
}

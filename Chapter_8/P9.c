#include <stdio.h>


int main(){
	float coin_value[]= {0.1,0.2,0.5,1,2,5,10,50,100};
	int a = sizeof(coin_value);
	printf("%d\n",a);
	for(int i = 0; i < a/4 ; i++){
		printf("%2f\n", coin_value[i]);
	}
	return 0;
}

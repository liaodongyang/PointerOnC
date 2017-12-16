#include <stdio.h>

void q(int i){
	int yes = 0;
	for(int j=2; j<i;j++){
		int yu = i%j;
		if(yu == 0){
			yes = 1;
			break;
		}

	}
	if(yes == 0){
		printf("%d\n",i);
	}

}

void main(){
	for(int i = 1; i< 101 ; i++){
		q(i);
	}
}

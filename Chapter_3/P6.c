#include <stdio.h>

void main(){
	enum coin {PENNY= 4 , NICKEL = 6};
	enum coin COIN;
	COIN = NICKEL;
	printf("%d\n",COIN);
}

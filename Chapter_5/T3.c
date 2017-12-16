#include <stdio.h>

unsigned int reverse_bit( unsigned int value){
	//unsigned int r = 1;
	int i = 0;
	int j = 0;
	unsigned int nvalue = 0;
	while (i < 32){
		//printf("%x\n",value &(1 << i));
		if(value & (1 << i) ){
			j = 31 - i;
			nvalue += (1 << j);
		} 
		i++;
	}
	return nvalue;
}


int main(){
	unsigned int new;
	unsigned int ewu = 25;
	printf("%u\n", ewu);
	new = reverse_bit(ewu);
	printf("%u\n", new);
	return 0;

}

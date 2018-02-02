#include <stdio.h>

struct FLOAT{
	unsigned fraction : 24;
	unsigned exponent : 7;
	unsigned sign : 1;
};


int main(){
	struct FLOAT f;
	f.fraction = 0x11;
	f.exponent = 3;
	f.sign = 1;
	return 0;
}

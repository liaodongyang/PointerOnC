#include <stdio.h>
#include <stdlib.h>

int increment(int para){
	return para+1;
}

int negate(int para){
	int para0 = ~para;
	para0++;
	return para0;
}

int main(int argc, char *argv[]){
	if(argc != 2 && argc != 3){
		printf("parameter not enough\n");
		return 0;
	}
	
	if(argc ==2 ){
		int para1 = atoi(argv[1]);
		printf("incerment is %d\n", increment(para1));
		return 0;
	}
	
	if(argc == 3){
		int para1 = atoi(argv[1]);
		printf("increment is %d\n", increment(para1));
		int para2 = atoi(argv[2]);
		printf("negate is %d\n", negate(para2));
		return 0;
	}
	
	

	while(1){
	}

}

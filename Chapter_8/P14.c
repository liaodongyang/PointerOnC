#include <stdio.h>


int main(){
	int array[5][10]={ {1,2,3,4,5,6,7,8,9,0},
		           {0,9,8,7,6,5,4,3,2,1},
			   {2,3,4,5,6,7,8,9,0,1},
			   {9,8,7,6,5,4,3,2,1,0},
			   {8,7,6,5,4,3,2,1,2,3} 
	};
	int i = array[3,4];
	printf("%d\n", i);
	return 0;
}
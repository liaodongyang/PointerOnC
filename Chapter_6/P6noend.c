#include <stdio.h>


int main(){
	//int i[10]= {0,1,2,3,4,5,6,7,8,9}i;
	int arsize = 10;
	int array[arsize];
	int *pi;
	//int offset = 3;
	//p += 3;
	int i = 0;
	for(pi = &array[0];pi < &array[arsize];){
		*++pi = i;
		i++;
	}
	printf("%d\n", *pi);
	return 0;
}

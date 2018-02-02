#include <stdio.h>
#include <stdlib.h>

int *frequency(int size){
	int *array;
	int i;
	array = (int *)malloc(size * sizeof(int));
	if(array == NULL)
		return NULL;
	for(i = 0;i < size; i++)
		array[i]= 0;
	while(scanf("%d", &i) == 1){
		if(i <= 0 && i > size)
			return NULL;
		array[i-1] += 1;
		printf("%d\n",array[i-1]);
	}
	return array;
}

int main(){
	frequency(10);
	return 0;
}

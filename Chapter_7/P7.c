#include <stdio.h>

int find_max(int array[10]){
	int i;
	int max = array[0];
	for(i= 0; i < 10;i++){
		if(array[i] > max)
			max = array[i];
	}
	return max;
}
int main(){
	int ar[10]={1,2,3,4,5,6,3,2,3,4};
	int maxx = find_max(ar);
	printf("%d\n",maxx);
	return 0;
}

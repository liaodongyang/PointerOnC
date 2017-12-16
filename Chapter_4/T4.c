#include <stdio.h>

void copy_n( char dst[], char src[], int n){
	for(int i=0; i< n; i++){
		dst[i] = src[i];
	}

}

void main(){
	char a[] = "dongyang";
	char b[15];
	copy_n(b,a,4);
	printf("%s\n", b);
}

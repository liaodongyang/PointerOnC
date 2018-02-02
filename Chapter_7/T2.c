#include <stdio.h>

int gcd(int M, int N){
	if(M % N == 0){
		return N;
	}else{
		int R = M % N;
		return gcd(N,R);
	}
}

int main(){
	int gong = gcd(12,8);
	printf("%d\n", gong);
	return 0;
}

#include <stdio.h>

double q(int n, double a){
	double ak = (a+ n/a)/2;
	printf("%f\n", ak);
	if(ak == a){
		return 0;
	}
	return q(n,ak);
}

void main(){
	q(5,1);

}

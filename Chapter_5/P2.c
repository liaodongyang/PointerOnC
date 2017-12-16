#include <stdio.h>

//static int counter = 1;

/*
 * the static value only can be declared once.
 * Next it will sustain the value when first declaration
 */

int
func(void){
	static int counter = 1;
	//int counter = 1;
	printf("%d\n", counter);
	return ++counter;	
}

int main(){
	int answer;
	answer = func() -func() * func();
	printf("%d\n", answer);
	return 0;
}

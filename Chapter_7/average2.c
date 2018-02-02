#include <stdio.h>
#include <stdarg.h>

float average(int n_values, ... ){
	va_list var_arg;
	int count;
	float sum = 0;
	
	va_start(var_arg, n_values);

	for(count = 0;count < n_values;count++){
		sum += va_arg(var_arg, int);
	}

	va_end(var_arg);
	return sum / n_values;

}


int main(){
	float summ = average(3,1,13,4);
	printf("%f\n",summ);
	return 0;
}

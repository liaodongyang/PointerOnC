#include <stdio.h>
#include <stdarg.h>

int maxlist(int n_values, ... ){
	va_list var_arg;
	int count;
	float max = 0;
	
	va_start(var_arg, n_values);

	for(count = 0;count < n_values;count++){
		int temp = va_arg(var_arg, int);
		if( temp > max)
			max = temp;
	}
	va_end(var_arg);
	return max;

}


int main(){
	int summ = maxlist(2,1,2,6,4);
	printf("%d\n",summ);
	return 0;
}

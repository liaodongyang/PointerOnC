#include <stdio.h>

void set_bit( char bit_array[], unsigned bit_number){
	bit_array[bit_number-1] = '1';
}

void clear_bit (char bit_array[], unsigned bit_number){
	bit_array[bit_number-1] = '0';
}

void assign_bit( char bit_array[], unsigned bit_number, int value){
	if (value == 0){
		bit_array[bit_number] = '0';
	}else{
		
		bit_array[bit_number] = '1';
	}
}

int test_bit (char bit_array[], unsigned bit_number){
	//bit_array[bit_number-1] = "0";
	if (bit_array[bit_number-1] != '0'){
		return 1;
	}else{
		return 0;	
	}
}

int main(){
	char a[] = "0000000";
	set_bit(a,2);
	printf("%s\n",a);
	clear_bit(a,2);
	printf("%s\n",a);
	assign_bit(a,3,1);
	printf("%s\n",a);
	int q = test_bit(a,3);
	printf("%d\n",q);
	return 0;
}

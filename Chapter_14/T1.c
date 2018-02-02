#include <stdio.h>

void print_ledger_long(int arg){
	printf("long");
}
void print_ledger_detailed(int arg){
	printf("detail");
}
void print_ledger_default(int arg){
	printf("default");
}


void print_ledger(int arg){

#ifdef OPTION_LONG
	#define OK 1
	print_ledger_long(arg);
#endif

#ifdef OPTION_DETAILED
	#define OK 1
	print_ledger_detailed(arg);
#endif

#ifndef OK
	print_ledger_default(arg);
#endif
}


int main(){
	print_ledger(2);
	return 0;
}

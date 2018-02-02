#include <stdio.h>

#define CPU_VAX 0;
#define CPU_68000 1;
#define CPU_68020 2;
#define CPU_80386 3;
#define CPU_6809 4;
#define CPU_6502 5;
#define CPU_3B2 6;
#define CPU_UNKNOWN 7;
//#define CPU_68000 1;

int cpu_type(void){
#if defined(VAX)
	return CPU_VAX;
#elif defined(M68000)
	return CPU_68000;
#elif defined(M68020)
	return CPU_68020;
#elif defined(I80386)
	return CPU_80386;
#elif defined(X6809)
	return CPU_6809;
#elif defined(M68000)
	return CPU_6802;
#elif defined(M68000)
	return CPU_3B2;
#else
	return CPU_UNKNOWN;
#endif
}

int main(){
	int cpu_t = cpu_type();
	printf("%d\n",cpu_t);
	return 0;
}

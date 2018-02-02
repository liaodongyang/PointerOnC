#include <stdio.h>

#define PRINT(format, value)  \
	printf("file: %s, line: %d, %s = "format"\n", \
		__FILE__, __LINE__ , #value, value );

int main(){
	int x = 2;
	int y = 2;
	PRINT("%d", x * y + 3 );
	return 0;
}

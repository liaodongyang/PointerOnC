#include <stdio.h>
#include <stdarg.h>

void myprintf(char *string, ...){
	char *p = string;
	va_list var_list;
	va_start(var_list, string);
	while(*p != '\0'){
		if(*p == '%'){
			switch(*++p){
			case 'd':
				print_integer(va_arg(var_list, int));
				break;
			case 'f':
				print_float(va_arg(var_list, float));
				break;
			case 'c':
				putchar(va_arg(var_list, int));
				break;
			case 's':
				char *q = va_arg(var_list, char *);
				while(*q != '\0'){
					putchar(*q++);
				}
				break;
			default:
				break;
			}
		}else{
			putchar(*p);
		}
		p++;
	}
	//va_arg(var_list, int);
	va_end(var_list);
}

int main(){
	myprintf("dongyang");
	return 0;
}


#include <stdio.h>

int ascii_to_integer(char *string){
	//char *check = string;
	//printf("%d\n", *string);
	//for( ; *check == '\0'; check++ ){
		//int k = (int )*checki;
	//	printf("%d\n", *check);
	//	if( *check > 57 && *check < 48 ){
	//		return 1;
	//	}
	//}
	int result = 0;
	char *p = string;
	while(*p != '\0'){
		printf("%d\n",  *p);
		if( *p >= '0' && *p <= '9' ){
			result *=10;
			result += *p - '0';
			
		}	
		p++;
	}
	if( result == 0)
		return 0;
	return result;	
}

int main(){
	char a[5]= "0901";
	int num = ascii_to_integer(a);
	printf("%d\n", num);
	return 0;
}

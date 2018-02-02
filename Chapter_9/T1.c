#include <stdio.h>


int main(){
	int ch ;
	int con=0,space=0,num=0,down=0,upper=0,punc=0,unprint=0;
	while((ch = getchar()) != EOF){
		if(ch == 040){
			space++;
		}
		if(ch > 040 && ch < 060 ){
			punc++;
		}
		if(ch > 071 && ch < 0101){
			punc++;
		}
		if(ch > 0132 && ch < 0141){
			punc++;
		}
		if(ch > 057 && ch < 072){
			num++;
		}
		if(ch > 0100 && ch < 0133){
			upper++;
		}
		if(ch > 0140 && ch < 0173){
			down++;
		}
		if(ch > 0177){
			unprint++;
		}
		if(ch < 040){
			con++;
		}
			
	}
	printf("The space is %d\n", space);
	printf("The con is %d\n", con);
	printf("The down is %d\n", down);
	printf("The unprint is %d\n", unprint);
	printf("The punc is %d\n", punc);
	printf("The upper is %d\n", upper);
	printf("The num is %d\n", num);
	//printf("The space is %d\n", space);
	return 0;
}

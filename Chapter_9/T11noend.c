#include <stdio.h>



int main(int argc, char *argv[]){
	if( argc != 2){
		//printf("inv param\n");
		perror("Invald parameter");
		return 0;
	}
	char str[1024];
	char *ch="the";
	int sum=0;
	FILE *fp;
	fp = fopen(argv[1], "r");
	if(fp == NULL){
		perror("Error opening file");
		return -1;
	}
	while(fgets(str,1000,fp)!=NULL){
	      int cnt = 
	}
	return 0;
}

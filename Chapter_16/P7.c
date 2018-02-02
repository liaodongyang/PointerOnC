#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handler(int signo){
	switch(signo){
		case 8:
		    printf("get a signal -- SIGFPE\n");
		    abort();
		    break;
		default:
		    printf("Unkown\n");
		    break;
	}
}

int main(){
	//int x = 2/0;
	signal(SIGFPE, handler);
	int x = 2/0;
	return 0;
}

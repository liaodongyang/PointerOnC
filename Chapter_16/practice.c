#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include <assert.h>
#include <locale.h>

#define NDEBUG 1

void sigroutne(int signo){
		switch(signo)
		{
			case 1:
				printf("Get a signal -- SIGHUP\n");
				break;
			case 2:
				printf("GET a signal -- SIGHINT\n");
				abort();
				break;
			case 3:
				printf("GET a signal -- SIGQUIT\n");
				break;
			default:
				printf("unknown error\n");
				break;
				
		}
}

int main(){
	//stdlib
	int a = abs(5);
	printf(" abs 5 is %d\n", a);
	div_t d = div(9,2);
	printf(" 9 div 2 is %d,%d\n",d.quot,d.rem);
	//stdlib
	srand((unsigned int)time(0));
	int ra = rand();
	printf("random is %d\n",ra);
	int at = atoi("23");	
	printf("atoi is %d\n",at);
	//math
	double x;
	x = sqrt(9);
	printf("sqrt 9 is %f\n",x);
	double y = exp(4.4);
	printf(" exp 4.4 is %f\n",y);

	double si = sin(90);
	printf("sin 90 is %f\n", si);
	
	double co = cos(90);
	printf("cos 90 is %f\n", co);
	
	double logger = log10(100);
	printf("log10 100 is %f\n", logger);

	// frexp ldexp modf floor pow fabs atof ...
	// time
	
	clock_t clc = clock();
	printf("%f\n", clc/CLOCKS_PER_SEC);
	time_t rawtime;
	time (&rawtime);
	printf("The current local time is: %s" , ctime(&rawtime));
	// mktime struct tm asctime localtime
	//char *ct = ctime()	
	// setjump no end
	
	// signal 
	printf("Process id is %d\n", getpid());
	signal(SIGHUP, sigroutne);
	signal(SIGINT, sigroutne);
	signal(SIGQUIT, sigroutne);
	//raise(SIGINT);
	//pause();
	// stdlib	
	//exit(0);
	//assert
	x = 2;
	assert(x >1);
	
	//stdlib
	system("ls -l");
	
	// qsort
	
	// locale
	//setlocale(LC_ALL,"en_US.UTF-8");
	
	
	
	for(;;);

	return 0;
}

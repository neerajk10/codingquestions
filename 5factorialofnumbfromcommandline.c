#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long long  int fact(int n){
	int i;
	long long int fac=1;
	if(n == 0){
		return 1;
	}
	for(i=1; i<=n; i++)
	{
		printf("fac = %x\n", fac);
		fac = fac * i;	
	}
	return fac;
}

int main(int argc, char *argv[]){
	int n, i;
	if(argc < 2 || argc > 2){
		printf("Usage : <program_name>  <number>\n");
		exit(0);
	}
	printf("\n");
	printf("strlen of argv[1] = %d\n", strlen(argv[1]));
	//n = *argv[1];
	//printf(" n = %d    [%xh]\n", n, n);
	printf("printing each character of argv[1] \n");
	for(i=0; i<strlen(argv[1]); i++){
		printf(" argv[1][%d]  =   %d   [%xh]\n", i, argv[1][i], argv[1][i]);
		if(argv[1][i] > 57 || argv[1][i] < 48){
			printf("please enter only integers \n");
			exit(0);
		}
	}
	n = atoi(argv[1]);
	printf(" n = %d    [%xh]\n", n, n);
	printf("factorial of %d is %lld\n", n, fact(n));
}

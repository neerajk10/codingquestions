#include<stdio.h>

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

void main(){
	int n;
	printf("Enter number : ");
	scanf("%d", &n);
	printf("\n");
	printf("factorial of %d is %lld\n", n, fact(n));
}

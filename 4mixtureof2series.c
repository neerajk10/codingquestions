#include<stdio.h>

void main(){
	int odd, even;
	int arr[50];
	int n, i, curr;
	printf("Enter n : ");
	scanf("%d", &n);
	if(n<1){
		printf("n should be positive and non-zero\n");
		exit(0);
	}
	printf("\n");
	for(i=0; i<=n-1; i++){
		if(i == 0){
			even=0;
			arr[i] = even;
		}
		else if(i == 1){
			odd=0;
			arr[i] = odd;
		}
		else if(i%2==0){
			even = even+2;
			arr[i] = even;
		}
		else if(i%2!=0){
			odd = odd + 1;
			arr[i] = odd;
		}
	}
	printf("%dth element is %d\n", n, arr[n-1]);

}

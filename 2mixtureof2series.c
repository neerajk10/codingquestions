// https://youtu.be/qEJcAuH7rZg?list=PLKtofb3HgEywSqg-IMpTClVT-IIoAifHL&t=225
//

#include<stdio.h>

void main(){
	int i, n, currindex, odd, even;
	int series[50]={0};
	printf("Enter n : ");
	scanf("%d", &n);
	printf("\n");
	for(i=1; i<=n; i++){
		currindex = i%2;
		if(i==1){
			odd = 1;
			series[i] = odd;
		}
		else if(i==2){
			even = 1;
			series[i] = even;
		}
		//for odd indices
		else if(currindex == 1){
			odd = odd * 2;	
			series[i] = odd;
		}
		//for even indices
		else if(currindex == 0){
			even = even * 3;
			series[i] = even;
		}
	}
	printf("nth term = %d\n", series[n]);
}

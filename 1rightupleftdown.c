/* https://youtu.be/TUH5QKWWQ-Y?t=865  */

#include<stdio.h>

enum {RIGHT, UP, LEFT, DOWN, AGAIN_RIGHT};

void main(){
	int i, n, curr, x=0, y=0, toadd = 10;
	printf("Enter number of steps : ");
	scanf("%d", &n);
	printf("\n");
	for(i=0; i<n; i++){
		curr = i%5;
		switch(curr){
			case RIGHT:	x=x+toadd;
					break;
			case UP: 	y=y+toadd;
					break;
			case LEFT: 	x = x-toadd;
					break;
			case DOWN:	y = y-toadd;
					break;	
			case AGAIN_RIGHT: x=x+toadd;
					break;
		}
		toadd = toadd + 10;
	}
	printf("x=%d, y=%d\n", x, y);
}

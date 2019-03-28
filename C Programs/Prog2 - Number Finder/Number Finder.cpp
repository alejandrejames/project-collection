#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x, y, z, c;
		printf("This program determines the numbers between two numbers\n");
		printf("Made by: Alejandre James Papina\n\n");
			c=1;
			printf("Enter the First Number: ");
			scanf("%d", &x);
			printf("Enter the Second Number: ");
			scanf("%d", &y);

			if(x>y){
				z=x-y;
				while(c<z){
					y=y+1;
					printf("Number: %d\n" ,y);
					c=c+1;
			}
		}
			else{
				z=y-x;
				while(c<z){
					x=x+1;
					printf("Number: %d\n" ,x);
					c=c+1;
				}
			}
				
			if(x=y)
				printf("There are no integer values between them\n");
			else
				printf("Ano ang tig input mo??BOBO mo nman");
	return 0;
}

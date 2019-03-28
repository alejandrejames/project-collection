#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x, y, z;
		
		printf("Input first value: ");
		scanf("%i" ,&x);
		printf("Input second value: ");
		scanf("%i" ,&y);
		printf("Input third value: ");
		scanf("%i" ,&z);
		
		if(x==0 || y==0 || z==0)
				printf("Invalid value");
		if((x*x)==(y*y)+(z*y))
				printf("It is a right triangle");
			else if((y*y)==(x*x)+(z*z))
					printf("It is a right triangle");
				else if((z*z)==(x*x)+(y*y))
						printf("It is a right triangle");
					else
						printf("Error");
					
	return 0;
}

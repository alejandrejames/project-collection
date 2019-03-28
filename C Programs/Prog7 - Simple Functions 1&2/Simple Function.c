#include<stdio.h>
main(){
	int z;
	void test(){
		while(z!=0){
			if(z<0)
					z=z*-1;
				printf("The absolute value is %i\n",z);
				printf("Enter a number:");
				scanf("%i",&z);
					}
		printf("Bye...");
				}
					printf("Enter a number(Enter 0 to exit):");
					scanf("%i",&z);
					test(z);
					return 0;
}

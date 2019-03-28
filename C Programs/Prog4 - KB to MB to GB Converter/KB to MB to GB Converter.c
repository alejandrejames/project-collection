#include<stdio.h>
main(){
	float mb,gb,kb;
	char z;
	
	printf("Enter the value in KB:");
	scanf("%f",&kb);
	
	mb=kb*0.000977;
	
	printf("The converted value is %.2f MB\n",mb);
	printf("Do you want the result to be converted to GB?(Y/N):");
	scanf(" %c",&z);
	
	while(z!='n' && z!='y'){
		printf("Wrong enter another:");
		scanf(" %c",&z);
	}
	if(z=='y'){
			gb=mb*0.000977;
			printf("The converted value is %.2f GB",gb);
	}
	else
		printf("Thank you for using thy program...");
}

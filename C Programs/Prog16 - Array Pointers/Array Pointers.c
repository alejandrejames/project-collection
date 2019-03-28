#include<stdio.h>
#include<string.h>
void vsearch(int*arrPTR,int vPTR){
		int c=0,temp;
		for(c=0;c<10;c++){
						if(arrPTR[c]==vPTR){
							printf("%i is in the array at index %i",vPTR,c);
							temp=vPTR;		
									}
						}
		if(temp!=vPTR)
			printf("%i is not in the array",vPTR);
							}
void greaqual(int*arrPtr){
					int c,v=0;
					printf("\nThe number of integers greater than or equal to 10 are ");
					for(c=0;c<10;c++){
						if(arrPtr[c]>=10)
							v++;
						}
					printf("%i",v);
				}

main(){
	FILE*input;
	input=fopen("prob4.in","r");
	int arr[10];
	int c,a=0,v;
	while(fscanf(input,"%i",&c)==1){
				arr[a]=c;
				a++;
				if(a==11)
					v=c;
									}
	vsearch(arr,v);
	greaqual(arr);
}

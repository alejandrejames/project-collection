#include<stdio.h>
FILE *inp;
int small,lar,sum,a;
float ave;

void smalle(int a){	
                if(small==0){
                           	small=a;
						   }
				if(a<small){
						   	small=a;
						   }
				}
void larg(int a){	
				if(lar==0){
						lar=a;
						}
				if(a>lar){
						lar=a;
						}
				}
void suum(int a){
				sum=sum+a;
				}
void aver(void){
	inp=fopen("numbers.txt" ,"r");
	int temp=0 ,count=0;
	while(fscanf(inp, "%i" ,&a)==1){
					if(a!=0){
							temp=temp+a;
							count++;
							}
					else
						fclose(inp);
							}
	ave=temp/(count*1.0);
				}
main(){				
inp=fopen("numbers.txt","r");
if(inp==NULL){
			printf("Error opening the file.");
			return 1;
			}
printf("Numbers read from the file \"numbers.txt\":");
while(fscanf(inp, "%i" ,&a)==1){
								if(a!=0)
										printf("%3i",a);
								if(a==0)
										fclose(inp);
								else{
									smalle(a);
									larg(a); 
									}
								suum(a);
								}
								aver();
if(small==0)
	printf("\nError! The first item was zero\n");
else{
	printf("\nSmallest: %i \n",small);
	printf("Largest: %i \n" ,lar);
	printf("Sum: %i \n",sum);
	printf("Average: %.2f\n" ,ave);
	}
return 0;	
}

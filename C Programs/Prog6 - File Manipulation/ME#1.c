#include<stdio.h>
#define pogi 100
main(){
FILE *inp;
FILE *out;

	char qwe[pogi];
	int a;
	int s;
	int d;
	double e,r;
	r=0;
	printf("Enter the filename: ");
	scanf("%s",qwe);
	inp=fopen(qwe,"r");
	out=fopen("pays.txt", "w");
	if(inp==NULL){
			printf("Error opening the file.");
			return 1;
			}
	while(fscanf(inp,"%i",&a)==1){
		printf("Pay at %i centavos/hr ",a);
		fprintf(out,"Pay at %i centavos/hr ",a);
		fscanf(inp,"%i",&s);
		printf("for %i hours ",s);
		fprintf(out,"for %i hours ",s);
		if(s>60){
			d=(s-60)*2;
			e=((a*40)+(a*30)+(a*d));
			e=e/100;
			}
		else if((s>=40) &&(s<=60)){
			e=((s-40)*(a*1.5))+(40*a);
			e=e/100;
			}
		else{
			e=s*a;
			e=e/100;
			}
		printf("is %.2f pesos.\n" ,e);
		r=r+e;
		fprintf(out,"is %.2f pesos.\n",e);
		}
		    printf("Total pay is %.2f pesos.\n",r);
                fprintf(out,"Total pay is %.2f pesos.\n",r);
}

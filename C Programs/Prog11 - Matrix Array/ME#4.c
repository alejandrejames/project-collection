#include<stdio.h>
main(){
FILE*inp1;
FILE*inp2;

	int arry1[100][100];
	int arry2[100][100];
	int arrymtrx[100][100];
	int a,b,c,d,temp;
	int a1=0,a2=0,b1=0,b2=0,c1,c2;
	
	inp1=fopen("matrix_A.txt","r");
	if(inp1==NULL){
		printf("Error opening file\n");
				return 1;}
	printf("Matrix A\n");
	fscanf(inp1,"%i",&a);
	fscanf(inp1,"%i",&b);
	while(fscanf(inp1,"%i",&temp)==1){
		if(a2==b){
			a1++;
			a2=0;
			printf("\n");
			arry1[a1][a2]=temp;
			printf("%2i",arry1[a1][a2]);
			a2++;}
		else{
			arry1[a1][a2]=temp;
			printf("%2i",arry1[a1][a2]);
			a2++;}
				}
	inp2=fopen("matrix_B.txt","r");
	if(inp2==NULL){
		printf("Unable to open file #2\n");
		return 1;}
	printf("\n\nMatrix B\n");
	fscanf(inp2,"%i",&c);
	fscanf(inp2,"%i",&d);
	while(fscanf(inp2,"%i",&temp)==1){
		if(b2==d){
			b1++;
			b2=0;
			printf("\n");
			arry2[b1][b2]=temp;
			printf("%2i",arry2[b1][b2]);
			b2++;}
		else{
			arry2[b1][b2]=temp;
			printf("%2i",arry2[b1][b2]);
			b2++;}
	}
	printf("\n\nMatrix AB\n");
	if(b!=c){
		printf("The matrices are not compatible\n");
		return 1;}
	for(c1=0;c1!=a;c1++)
			for(b1=0;b1!=d;b1++)
				for(b2=0,a2=0;b2!=c;b2++,a2++)
					arrymtrx[c1][b1]=(arry1[c1][a2]*arry2[b2][b1])+arrymtrx[c1][b1];
	a1=0;a2=0;
	while(a1!=a)
		if(a2==d){
			a1++;
			if(a1==a){
				fclose(inp1);
				fclose(inp2);}
			else{
				a2=0;
				printf("\n");
				printf("%4i",arrymtrx[a1][a2]);
				a2++;}
				}
		else{
			printf("%4i",arrymtrx[a1][a2]);
			a2++;}
		printf("\n");
}

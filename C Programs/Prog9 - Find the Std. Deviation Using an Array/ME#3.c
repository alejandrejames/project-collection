#include<stdio.h>
#include<math.h>
#define size 100
main(){
FILE*inp;
	float tbl[size];
	int z=0,c=0;
	float stdv=0,itm,dff,mn,a,temp=0;
	
	inp=fopen("numbers.txt" ,"r");
	if(inp==NULL){
		printf("Error opneing the file.\n");
		return 1;
			}
			fscanf(inp, "%i" ,&c);
	while(z!=c){
				fscanf(inp,"%f",&tbl[z]);
				z++;
					}
		z=0;
		while(z!=c){
		a=tbl[z];
		temp=temp+a;
		z++;
			}
			mn=temp*1.00/z;
	printf("The mean is %.2f\n",mn);
	z=0;
	while(z!=c){
		itm=tbl[z];
		dff=itm-mn;
		stdv=(pow(dff,2)+stdv);
		z++;
		}
		stdv=(stdv)/c*1.0;
		stdv=sqrt(stdv);
	printf("The standard deviation is %.2f\n\n",stdv);
	printf("Index       Item       Difference\n");
	z=0;
	while(z!=c){
		itm=tbl[z];
		dff=itm-mn;
		printf("%3i %12.2f %14.2f\n",z,itm,dff);
		z++;
			}
}

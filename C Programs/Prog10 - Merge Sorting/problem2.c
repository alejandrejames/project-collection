#include<stdio.h>
main(){
FILE*inpa;
FILE*inpb;

	int aarray[20];
	int barray[20];
	int mergary[20];
	int a,b,c=0,d=0,z=0,e=0,p=0,temp,q,r;

	inpa=fopen("prob2-a.in","r");
	if(inpa==NULL)
		printf("Error opening the file\n");
	inpb=fopen("prob2-b.in","r");
        if(inpb==NULL)
                printf("Error opening the file\n");
	printf("Array 1:");
	while(fscanf(inpa,"%i",&a)==1){
		aarray[c]=a;
		printf("%2i",aarray[c]);
		mergary[e]=a;
		c++;
		e++;
			}
	printf("\n");
	printf("Array 2:");
	while(fscanf(inpb,"%i",&b)==1){
		barray[d]=b;
		printf("%2i",barray[d]);
		mergary[e]=b;
		e++;
		d++;
			}
	printf("\n");		
	printf("Merged Array:\n");
		for(q=0;q<e;q++){
			for(r=0;r<e;r++){
				if(mergary[q]<mergary[r]){
					temp=mergary[q];
					mergary[q]=mergary[r];
					mergary[r]=temp;}
							}
					}
	while(p!=e){
		printf("%2i",mergary[p]);
		p++;}
	printf("\n");
}

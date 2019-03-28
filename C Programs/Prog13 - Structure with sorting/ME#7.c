#include<stdio.h>
#include<string.h>
typedef struct stud{
		char name[10];
		long no;
		int age;
		char gend;
		}clas;
main(){
FILE*inp;
inp=fopen("students.txt","r");
	if(inp==NULL){
		printf("Error opening the file\n");
		return 1;}
		
	clas male[10];
	clas fem[10];
	clas temp;
	int z=0,a=0,q=0,c=0;
	while(fscanf(inp,"%s %ld %i %c",male[q].name,&(male[q].no),&(male[q].age),&(male[q].gend))==4){
			if(male[q].gend=='F'){
				fem[c]=male[q];
				c++;}
			else
				q++;
	}
	
	for(z=0;z!=q;z++)
		for(a=0;a!=q;a++)
			if(strcmp(male[z].name,male[a].name)<0){
				temp=male[z];
				male[z]=male[a];
				male[a]=temp;}
	for(z=0;z!=c;z++)
		for(a=0;a!=c;a++)
			if(strcmp(fem[z].name,fem[a].name)<0){
                temp=fem[z];
                fem[z]=fem[a];
                fem[a]=temp;}

	printf("Name   No. Age\n------------------\nMale:\n");
	for(z=0;z!=q;z++)
		printf("%-7s %-.2ld %-3i\n",male[z].name,male[z].no,male[z].age);
	printf("\nFemale:\n");
	for(z=0;z!=c;z++)
		printf("%-7s %-.2ld %-3i\n",fem[z].name,fem[z].no,fem[z].age);
}

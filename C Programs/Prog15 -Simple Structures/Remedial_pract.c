#include<stdio.h>
typedef struct students{
	char name[10];
	int quiz,mt,me,dg;
}student;
main(){
	FILE*inp;
	inp=fopen("record.txt","r");
	if(inp==NULL){
		printf("Error opening the file\n");
		return 1;}
	float fscore;
	student temp;
	printf("Name      Quiz      Midterm      ME     Desired Grade      Final Score Needed\n------------------------------------------------------------------------------\n");
	while(fscanf(inp,"%s %i %i %i %i",temp.name,&(temp.quiz),&(temp.mt),&(temp.me),&(temp.dg))==5){
			fscore=(temp.dg)-((temp.quiz*.25)+(temp.mt*.15)+(temp.me*.40));
			fscore=fscore/0.20;
			printf("%-7s %8i %9i %10i %11i %18g\n",temp.name,temp.quiz,temp.mt,temp.me,temp.dg,fscore);
	}	
}

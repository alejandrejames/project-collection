#include<stdio.h>
#include<string.h>
main(){
	FILE*inp;
	FILE*out;
			char strn[100][20];
			char strn2[20];
			char temp[20];
			int lnt,a=0,q,z,w=0;
			inp=fopen("strings.txt","r");
			out=fopen("sorted.txt","w");
			if(inp==NULL){
				printf("Error opening file.\n");
				return 1;}
				
			while(fscanf(inp,"%s",strn[a])==1)
					a++;

			for(q=0;q<a;q++)
				for(z=0;z<a;z++)
					if(strlen(strn[q]) < strlen(strn[z])){
						strcpy(temp,strn[q]);
						strcpy(strn[q],strn[z]);
						strcpy(strn[z],temp);}
							
			for(q=0;q!=a;q++){
				strcpy(temp,strn[q]);
				for(z=0;temp[z];z++){
					temp[z]=tolower(temp[z]);}
				strcpy(strn[q],temp);}
				
			for(q=0;q<a;q++)
				for(z=0;z<a;z++)
					if(strlen(strn[q])==strlen(strn[z]))
						if(strcmp(strn[q],strn[z])<0){
							strcpy(temp,strn[q]);
							strcpy(strn[q],strn[z]);
							strcpy(strn[z],temp);}
					
			printf("STRING\tLENGTH\n");
			fprintf(out,"STRING\tLENGTH\n");
			for(q=0;q<a;q++){
				printf("%-12s",strn[q]);
				fprintf(out,"%-12s",strn[q]);
				lnt=strlen(strn[q]);
				printf("%i",lnt);
				fprintf(out,"%i",lnt);
				printf("\n");
				fprintf(out,"\n");}
			printf("\n");
}

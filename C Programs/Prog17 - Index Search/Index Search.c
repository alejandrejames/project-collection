#include<stdio.h>
#include<string.h>
#define maxlen 255
main(){
		int c=0;
		int len,i,j,k;
		char word[maxlen];
		char string[maxlen];
		char *temp;
		
		printf("Enter a word or string: ");
		scanf(" %[^\n]s",word);
		printf("Enter the word to be tested: ");
		scanf(" %s",string);
		
		len = strlen(word);
		k = strlen(string);
		for(i=0;i<len;i++){
							for(j=0;j<k;j++){
											temp[j]=word[i+j];
												}
							if(strcmp(temp,string)==0)
								c++;
						
							}
		printf("%i",c);
		
}

#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int data;
	struct list *nextPtr;
	}ListNode,*ListNodePtr;

void insert(ListNodePtr *sPtr,int value);
int del(ListNodePtr *sPtr,int value);
int isempty(ListNodePtr sPtr);
void printlist(ListNodePtr currentPtr);

main(){
FILE*inp;
	inp=fopen("list.txt","r");
	int oper,item;
	ListNodePtr startPtr=NULL;

	while(fscanf(inp,"%i %i",&oper,&item)==2){
		if(oper==1){
				printf("Insert: %i\n",item);
				insert(&startPtr,item);
				printlist(startPtr);
				}
		else if(oper==2){
				printf("Delete: %i\n",item);
				if(!isempty(startPtr)){
							if(del(&startPtr,item)){
											printlist(startPtr);
											}
							else{
								printf("%i not found.\n\n",item);
								}
							}
				else{
					printf("List  is empty\n");
					}
				}
		else
			printf("Operator not found\n");
	}
}
void insert(ListNodePtr *sPtr,int value){
				ListNodePtr newPtr;
				ListNodePtr previousPtr;
				ListNodePtr currentPtr;
				
				newPtr=malloc( sizeof( ListNode));

				if (newPtr!=NULL){
						newPtr->data=value;
						newPtr->nextPtr=NULL;
						
						previousPtr=NULL;
						currentPtr=*sPtr;

						while(currentPtr!=NULL && value > currentPtr->data){
												previousPtr=currentPtr;
												currentPtr=currentPtr->nextPtr;
													}
						if(previousPtr==NULL){
									newPtr->nextPtr=*sPtr;
									*sPtr=newPtr;
									}
						else{
							previousPtr->nextPtr=newPtr;
							newPtr->nextPtr=currentPtr;
							}
							}
				else{printf("%i not inserted.No memory available.\n",value);
					}
		}
int del(ListNodePtr*sPtr,int value){
					ListNodePtr previousPtr;
					ListNodePtr currentPtr;
					ListNodePtr tempPtr;

					if(value==(*sPtr)->data){
								tempPtr=*sPtr;
								*sPtr=(*sPtr)->nextPtr;
								free(tempPtr);
								return value;
								}
					else{
						previousPtr=*sPtr;
						currentPtr= (*sPtr)->nextPtr;

					while(currentPtr!=NULL && currentPtr->data!=value){
												previousPtr=currentPtr;
												currentPtr=currentPtr->nextPtr;
												}
					if(currentPtr!=NULL){
								tempPtr=currentPtr;
								previousPtr->nextPtr=currentPtr->nextPtr;
								free(tempPtr);
								return value;
								}
					}
					return 0;
					}
void printlist(ListNodePtr currentPtr){
					if(currentPtr==NULL){
								printf("List is empty\n\n");
								}
					else{
						printf("The list is:\n");
						while(currentPtr!=NULL){
									printf("%i -->",currentPtr->data);
									currentPtr=currentPtr->nextPtr;
									}
					printf("NULL\n\n");
						}
					}
int isempty(ListNodePtr sPtr){
				return sPtr==NULL;
				}


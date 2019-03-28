#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"strprc.h"

void menu();
void strp();
void arrmnu();
void lnrdts();
void oper(char*name);

int main(){
	int select;
	char prompt;
	        system("clear");
			printf("        MENU\n");
			printf("1. String Proccessing\n");
			printf("2. Linear Data Struct\n");
			printf("3. Non - linear Data Struct\n");
			printf("4 . Quit\n");
			printf("  Enter your choice: ");
			scanf("%i",&select);
				switch(select){
					case 1:
					    system("clear");
						menu();
						break;
					case 2:
					    system("clear");
						lnrdts();
						break;
					case 3:
					    system("clear");
						printf("        Non - Linear Data Structure\n");
                				printf("1. Trees\n");
                				printf("2. Graphs\n");
                				printf("3. Back\n");
                				printf("  Enter your choice: ");
						scanf("%i",&select);
						switch(select){
								case 1:
								        system("clear");
									    break;
								case 3: 
								        system("clear");
								        main();
									    break;
								default:
								        break;
						}
						break;
					case 4:
						return 0;
						break;
					default:
						main();
						printf("Invalid choice\n");
					        break;
				}

}

void menu(){
                         int select;
char name[255];
                         system("clear");
		                 printf("        String Proccessing\n");
                				printf("1. String Functions\n");
                				printf("2. Word Processing\n");
                				printf("3. String Operations\n");
                				printf("4 . Back\n");
                				printf("  Enter your choice: ");
						scanf("%i",&select);
						switch(select){
							case 1:
							    system("clear");
							    strp();
								break;
							case 2:
							    system("clear");
								printf("        Word Proccessing\n");
                						printf("1. String Substring\n");
                						printf("2. String Indexing\n");
                						printf("3. String Replacement\n");
                						printf("4. Back\n");
                						printf("  Enter your choice: ");
								scanf("%i",&select);
									switch(select){
											case 4:
												menu();
												break;
											}
								break;
							case 3:
								
							    system("clear");
								printf("Enter a string: ");
								scanf("%s",name);
								oper(name);
								break;
							case 4:
							    	system("clear");
							    	main();
								break;
							default:
								printf("Error inputted data not allowed\nDo it again\n\n");
								main();
								break;
						}
}
void oper(char*name){
int select=0;
           	char prompt;
            	system("clear");

								printf("        String Operations\n");
                						printf("1. String Traverse\n");
                						printf("2. String Insert\n");
                						printf("3. String Delete\n");
                						printf("4. Back\n");
                						printf("  Enter your choice: ");
                						scanf("%i",&select);
                						    switch(select){
                						            case 1:
                						                    trvrs(name);
                						                    oper(name);
                						                    break;
                						            case 2:
                						                    insrt(name);
                						                    oper(name);
                						                    break;
                						            case 3: 
                						                    delt(name);
                						                    oper(name);
                						                    break;
                						            case 4:
                						                    menu();
                						                    break;
                						            default:
                						                    break;
                						            }

}

void strp(){
            int select=0;
            char prompt;
            system("clear");
            printf("        String Functions\n");
                						printf("1. String Length\n");
                						printf("2. String Concatenate\n");
                						printf("3. String Compare\n");
                						printf("4. String Copy\n");
                						printf("5. Back\n");
                						printf("  Enter your choice: ");
								scanf("%i",&select);
								switch(select){
										case 1:
											while(prompt!='n'){
												stringln();
												printf("\nProgram has ended. Do you want to start again?(y/n): ");
												scanf(" %c",&prompt);
													}
											strp();
											break;
										case 2:
											cnctnte();
											strp();
											break;
										case 3:
											cmpr();
											strp();
											break;
										case 4:
											copy();
											strp();
											break;
										case 5:
										    menu();
										    break;
										default:
										    printf("\nInvalid keyword\n");
										    strp();
										    break;
								}
	}

void arrmnu(){
		int select=0;
           	char prompt;
            	system("clear");
            	printf("        Arrays\n");
                					printf("1. Linear Search\n");
                					printf("2. Binary Search\n");
                					printf("3. Back\n");
                					printf("  Enter your choice: ");
							scanf("%i",&select);
							switch(select){
									case 1:
										lnrsrch();
										arrmnu();
										break;
									case 2:
										bnrsrch();
										arrmnu();
										break;
									case 3:
										lnrdts();
										break;
									default:
										printf("Invalid keyword\n");
										arrmnu();
										break;
									}
		
		}

void lnrdts(){
		int select=0;
           	char prompt;
            	system("clear");
            	printf("        Linear Data Structure\n");
                					printf("1. Arrays\n");
                					printf("2. Linked List\n");
                					printf("3. Stacks\n");
							printf("4. Stacks(Postfix to Infix)\n");
							printf("5. Back\n");
                					printf("  Enter your choice: ");
							scanf("%i",&select);
							switch(select){
									case 1:
										system("clear");
										arrmnu();
										printf("Error inputted data not allowed\nDo it again\n\n");
										main();
										break;
									case 2:
										system("clear");
										linklst();
										lnrdts();
										break;
									case 3:
										system("clear");
										stcks();
										lnrdts();
										break;
									case 4:
										system("clear");
										stcksi2p();
										lnrdts();
										break;
									case 5:
										system("clear"); 
								        	main();
										break;
									default:
										printf("Invalid keyword\n");
										lnrdts();
										break;
									}

		
}

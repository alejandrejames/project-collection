//This document contains all the functions inside the my C program.
//Author:Alejandre James P. Papina -=-=-=-=-=-=-=-=- BSCS 2-B

//Strings
void stringln(){
	char strs[200][200];
	int i,a;
	printf("This program let's you find the number of strings\n");
	printf("Enter the number of strings you want to compute: ");
	scanf("%i",&a);
	for(i=0;i<a;i++){
		printf("Enter String %i: ",i+1);
		scanf("%s",strs[a]);
		printf("The lenght of the string is %i\n",strlen(strs[a]));
	}
}

void cnctnte(){
		char word[255],word1[255],messg;

		printf("This program lets you concatenate two strings\n");
		while(messg!='n'){
			printf("Enter the first string: ");
			scanf(" %[^\n]s",word);
			printf("\nEnter the second string: ");
			scanf(" %[^\n]s",word1);

			strcat(word,word1);
			printf("The concatenated string now is %s\n",word);
			printf("Do you want to concatenate another string(y/n)? ");
			scanf(" %c",&messg);
		}
}

void cmpr(){
		char word[255],word1[255],prompt;

		printf("This program let's you compare two strings which will have a higher value\n\n");
		while(prompt!='n'){
		printf("Enter the first: ");
		scanf(" %[^\n]s",word);
		printf("Enter the second string: ");
		scanf(" %[^\n]s",word1);

		if(strcmp(word,word1) > 0)
					printf("String %s has a higher value than string %s\n",word,word1);
		else if(strcmp(word,word1) < 0)
					printf("String %s has a higher value than string %s\n",word1,word);
		else
					printf("String %s and String %s are both equal\n",word,word1);

		printf("Do you want to compare 2 strings again(y/n)? ");
		scanf(" %c",&prompt);
		}
}

void copy(){
		char word[255],word1[255],prompt;

		printf("This program let's you replace the last string stored in the memory\n\n");
		while(prompt!='n'){
				printf("Enter a string:");
				scanf("%s",word);	
					printf("The current string stored in the string is: '%s'\n",word);
					printf("Do you want to replace the string(y/n)?");
					scanf(" %c",&prompt);
					if(prompt=='y'){
							printf("Enter the string: ");
							scanf(" %[^\n]s",word1);
							strcpy(word,word1);
							}
					else
						printf("Do you want to replace the string?(y/n)");
						scanf("%c",&prompt);
						if(prompt=='y')
						break;
					else
						break;
		}
}

//String Operations

char insrt(char*name){
        //char name[255];
        char a,prompt,item;
        int i,k,j;
        
        printf("This program let's you insert a character in the string\n\n");
        
        while(a!='n'){
            printf("The current stored item in the string are: '%s'\n",name);
      
            printf("Do you want to insert an entry to the string?(y/n): ");
            scanf(" %c",&prompt);
            if(prompt=='y'){
                        printf("Enter the postion you want to enter the character:");
                        scanf("%i",&k);
                        printf("Enter the character you want to insert: ");
                        scanf(" %c",&item);
                        j=0;
                        j=i;
                        while(j>=k){
                                name[j+1]=name[j];
                                j=j-1;
                                }
                        name[k]=item;
                        i = i+1;
                        }
            else
			break;
        }
}

char delt(char*name){
	system("clear");
        //char name[255];
        char prompt,a,prompt2;
        int i,k,j;
	
        
        printf("This program let's you delete a character in the string\n\n");

	while(prompt2!='n'){	
            printf("The current stored item in the string are: '%s'\n",name);
            printf("Do you want to delete an entry to the string?(y/n):");
            scanf(" %c",&prompt2);
            if(prompt2=='y'){
                        printf("Enter the position of the character: ");
                        scanf(" %i",&k);
                        k--;
                        j=8;
                        i=0;
                        
                        name[k] = name[j+1];
                        while(i<=(j-k)){
                                    name[(k)+i] = name[(k+i) + 1];
                                    ++i;
                                    }
                    }
           else{
               break;
			}
        }
	
}

char trvrs(char*name){
                //char name[255];
                char prompt,a;
                int i,k,j=0;
        
                printf("This program let's you find the location of a character in the string\n\n");
                
                while(prompt!='n'){
                                printf("Enter the character you want to locate: ");
                                scanf(" %c",&a);
                                
                                k = strlen(name);
                                for(i=0;i<k;i++){
                                            if(name[i]==a){
                                                    printf("A character has been detected on index number %i\n",i);
                                                    j++;
                                                        }
                                                 }
                                if(j==0)
                                        printf("The character has not been located");
                                printf("Do you want to locate another character?(y/n): ");
                                scanf(" %c",&prompt);
                                
                                }
}

//Arrays

void lnrsrch(){
		int arry[100],srch,c,n,cnt=0;
		char prompt;
		printf("This program searches a the location of a certain item using linear search\n\n");

		while(prompt!='n'){
					printf("Enter the number of elements in the array: ");
					scanf("%i",&n);

					printf("Enter %d numbers:",n);
					for(c=0;c<n;c++){
							scanf("%i",&arry[c]);
							}

					printf("Enter the number to be searched: ");
					scanf("%i",&srch);

					for(c=0;c<n;c++){
							if (arry[c] == srch){
										printf("%i is located at %i\n",srch,c+1);
										cnt++;
										}
							}
					if(cnt == 0)
						printf("%i is not in any location in the array\n",srch);
					else
						printf("%i appeared %i times in the array\n\n",srch,cnt);
				printf("Do you want to enter another string?(y/n): ");
                                scanf(" %c",&prompt);						
				}
}

void bnrsrch(){
		int c,frst,lst,mdl,n,src,arry[100];
		char prompt;
		printf("This program searches a the location of a certain item using binary search\n\n");

		while(prompt!='n'){
					printf("Enter the number of elements: ");
					scanf("%i",&n);

					printf("Enter the numbers(limit:%i)",n);
					for(c=0;c<n;c++){
								scanf("%i",&arry[c]);
								}
					
					printf("Enter the value to find\n");
					scanf("%i",&src);

					frst = 0;
					lst = n-1;
					mdl = (frst+lst)/2;

					while(frst<=lst){
							if(arry[mdl] == src){
								printf("%i found at %i\n",src,mdl+1);
								break;}
							else if(arry[mdl] < src)
								frst = mdl + 1;
							else
								lst = mdl - 1;
							mdl = (frst + lst)/2;
						}
					if(frst > lst){
							printf("%i is not present in the array\n\n",src);
							}
					
					printf("Do you want to enter another string?(y/n): ");
                                	scanf(" %c",&prompt);	
					}
		
}

//Linked List


void linklst(){
	printf("This program uses Linked List in inserting,deleting, and traversing.\n\n");

	struct node{
    	  	    int data;
    	  	    struct node *next;
		  }*head;
 
	int count(){
	    	    struct node *n;
	    	    int c=0;
	    	    n=head;
	    	    while(n!=NULL){
	    			n=n->next;
	    			c++;
	    			}
	    	    return c;
		} 
 
	void append(int num){
	    			struct node *temp,*right;
	    			temp= (struct node *)malloc(sizeof(struct node));
	    			temp->data=num;
	    			right=(struct node *)head;
	    			while(right->next != NULL)
	    			right=right->next;
	    			right->next =temp;
	    			right=temp;
	    			right->next=NULL;
				}

	void add( int num ){
	    		struct node *temp;
    			temp=(struct node *)malloc(sizeof(struct node));
    			temp->data=num;
    			if (head== NULL){
    					head=temp;
    					head->next=NULL;
    					}
    			else{
    				temp->next=head;
    				head=temp;
    			    }
			}

	void addafter(int num, int loc){
    					int i;
    					struct node *temp,*left,*right;
    					right=head;
    					for(i=1;i<loc;i++){
    							left=right;
    							right=right->next;
    								}
    					temp=(struct node *)malloc(sizeof(struct node));
    					temp->data=num;
    					left->next=temp;
    					left=temp;
    					left->next=right;
    					return;
					}
 
	void insert(int num){
    				int c=0;
    				struct node *temp;
    				temp=head;
    				if(temp==NULL){
    						add(num);
    						}
    				else{
    					while(temp!=NULL){
        						if(temp->data<num)
        							c++;
        						temp=temp->next;
    					}
    				if(c==0)
        				add(num);
    				else if(c<count())
        				addafter(num,++c);
    				else
        				append(num);
    					}
				}
 

	int delete(int num){
    			struct node *temp, *prev;
    			temp=head;
    			while(temp!=NULL){
    					if(temp->data==num){
        						if(temp==head){
        							head=temp->next;
        							free(temp);
        							return 1;
        							}
        						else{
        							prev->next=temp->next;
        							free(temp);
        							return 1;
        							}
    							}
    					else{
        					prev=temp;
        					temp= temp->next;
    						}
    					}
    			return 0;
			}
 

	void  display(struct node *r){
    					r=head;
    					if(r==NULL){
    						return;
    							}
    					while(r!=NULL){
    						printf("%d ",r->data);
    						r=r->next;
    							}
    					printf("\n");
					}

    int i,num;
    struct node *n;
    head=NULL;
    while(i!=4){
    printf("        Linked List\n");
    printf("1. Insert\n");
    printf("2. Traversal\n");
    printf("3. Delete\n");
    printf("4. Back\n");
    printf("  Enter your choice : ");
    if(scanf("%d",&i)<=0){
        printf("Enter only an Integer\n");
        exit(0);
    		} 
    else {
        switch(i){
        	case 1:  
		 	printf("Enter the number to insert : ");
                 	scanf("%d",&num);
                 	insert(num);
			system("clear");
                 	break;
        	case 2:
			system("clear");     
			if(head==NULL){
                			printf("List is Empty\n");
                			}
                	else{
                		printf("Element(s) in the list are : ");
                		}
                	display(n);
			printf("\n");
                	break;
        	case 3:
			system("clear");
	     		if(head==NULL)
                	printf("List is Empty\n");
                	else{
                		printf("Enter the number to delete : ");
                		scanf("%d",&num);
                		if(delete(num))
                    			printf("%d deleted successfully\n",num);
                		else
                    			printf("%d not found in the list\n",num);
                		}
			
                	break;
        	case 4:
	       		break;
        	default:
	    		printf("Invalid option\n");
        	}
    	}
    }	

}

//Stacks

void stcks(){
		printf("This program uses stacks in inserting(Push) and deleting(Pop) elements.\n\n");
	int top,status,val,MAX=5;
	printf("Enter the maximum size of the stack: ");
	scanf("%i",&val);
 	MAX=val;
	printf("\n");
	
	/*PUSH FUNCTION*/
	void push (int stack[], int item){
			   if (top == (MAX-1))
				status = 0;
	    		   else{
				status = 1;
				++top;
				stack [top] = item;
	    			}
						}
 
	/*POP FUNCTION*/
	int pop (int stack[]){  
	    		int ret;
	    		if (top == -1){
				ret = 0;
				status = 0;
	    				}
	    		else{
				status = 1;
				ret = stack [top];
				--top;
	    			}
			return ret;
			}
	/*FUNCTION TO DISPLAY STACK*/
	void display (int stack[]){
				int i;
	    			printf ("\nThe Stack is: ");
	    			if (top == -1)
					printf ("empty");
	    			else{
					for (i=top; i>=0; --i)
		   				printf ("\n%3d",stack[i]);
	    				}
	    			printf ("\n");
				}
 
	/*MAIN PROGRAM*/  
	    int stack [MAX], item;
	    int ch;
	    top = -1;
	 
	    do{
		do{
			printf ("        Stacks\n");
		   	printf ("1. PUSH(Insert)\n");
		   	printf ("2. POP(Delete)\n");
		   	printf ("3. Back\n");
		   	printf ("  Enter Your Choice: ");
		   	scanf  ("%i", &ch);
		   	if (ch<1 || ch>3)
		       		printf ("Invalid Choice, Please try again\n");
			}
		while (ch<1 || ch>3);
	       		switch (ch){
			case 1:
				printf ("Enter the number to be pushed : ");
				scanf  ("%i", &item);
				printf (" %i\n", item);
				push (stack, item);
				if (status){
					system("clear");
					printf ("After Pushing ");
			    		display (stack);
					printf("\n\n");
			    		if (top == (MAX-1)){
						system("clear");
						printf ("The Stack is Full\n\n");
						}
					}
				else{
					system("clear");
			    		printf ("Stack overflow on Push\n\n");
					}
				break;
	       case 2:
			item = pop (stack);
			if (status){
				system("clear");
				printf ("\nThe Popped item is %i.  After Popping: ",item);
			     	display (stack);
				}
			else{
			     system("clear");
			     printf ("Stack underflow on Pop\n");
				}
			break;
	       case 3:
			break;
	       default:
			break;
	       }
	    }while (ch != 3);
}


void stcksi2p(){
		printf("This program let's you convert infix notation to postfix notation\n\n");
		char prompt;
		while(prompt!='n'){		
		int val,SIZE=5;
		printf("Enter the maximum size of the stack: ");
		scanf("%i",&val);
		SIZE = val;
		
		char stack[SIZE];
		int top=-1;

		void push(char data){
    				if(top==SIZE-1){
        				printf("Stack is full\n");
        				return;
    						}
    				else{
        				top=top+1;
        				stack[top]=data;
        				printf("Pushed element is %c\n",data);
    					}
		}

		char pop(){
    			char ch;
    			if(top<0){
        			printf("stack is empty\n");
        			return;
    				}
    			else{
        			ch=stack[top];
        			printf("poped element is %c\n",ch);
        			top=top-1;
        			return(ch);
    				}
		}

		int check_pre(char a ,char b){
    					char op[]={'-','+','%','/','*','(',')'};
    					int i,c1=0,c2=0;
    					for(i=0;i<7;i++){
        					if(a==op[i])
            						c1=i+1;
        				else if(b==op[i])
            						c2=i+1;
    						}
    					if(c1>c2)
        					return(1);
    					else if(c1<c2)
        					return(-1);
    					else
        					return(0);
		}
        
                    

    		char in_str[50],out_str[50];
    		char ch,temp;
    		int x=0,y=0,pre;

    		printf("Enter the infix string\n");
    		scanf("%s",in_str);
    		ch=in_str[x];
    		while(ch!='\0'){
        		if((ch>='a' && ch<='z') || (ch<='A' && ch>='Z') || (ch>='0' && ch<='9'))
               			out_str[y++]=ch;
        		else if(ch=='(')
            			push(ch);

        		else if(ch==')'){
            			temp=pop();
            			while(temp!='('){
                			out_str[y++]=temp;
                			temp=pop();
            				}
         
                
        			} 

        		else{
            			if (top==-1 || stack[top]=='(')
                		push(ch);
            			else{
                			temp=stack[top];
                			pre=check_pre(ch,temp);
                			if(pre<0 ){
                    					do{                    
                    					out_str[y++]=pop();
                    					temp=stack[top];
							} while(top!=-1 && temp!='(' &&  (check_pre(ch,temp)<0));
                    					push(ch);
                				}
                			else{
                    				push(ch);
                				}
            				}
        			}
        			x++;
        			ch=in_str[x];
    			} 
    		while(top!=-1){
        		out_str[y++]=pop();
    			}
    		out_str[y]='\0';
    		printf("Postfix string= %s\n\n",out_str);

		printf("Do you want to run another test?(y/n) ");
		scanf(" %c",&prompt);
	}
}
//Quese

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
				
				int x, y;
				
				printf("This is a program made by: Alejandre James Papina\n\n");
				
				printf("Enter X coordinate: ");
				scanf("%d" ,&x);
				printf("Enter Y coordinate: ");
				scanf("%d" ,&y);
				
				while(((x>=0 && y>=0)&&(x<=0 && y<=0))){
					printf("vovo\n");
					printf("Enter X coordinate: ");
					scanf("%d" ,&x);
					printf("Enter Y coordinate: ");
					scanf("%d" ,&y);
				}
				if(x>0 && y>0)
					printf("It is in Q1");
				else
					if(x>0 && y<0)
						printf("It is in Q4");
					else
						if(x<0 && y>0)
							printf("It is in Q2");
						else
							if(x<0 && y<0)
								printf("It is in Q3");
							else
								if(y==0 && (!x==0))
									printf("It is in X Axis");
								else
									if((!y==0) && x==0)
										printf("It is the Y Axis");
									else
										if(y==0 && x==0)
											printf("It is in the origin");
										else
											printf("Ano ba ang tig input mo??Number dapat BOBO mo nman sobra");
				printf("\n\n");
									
										
	return 0;
}

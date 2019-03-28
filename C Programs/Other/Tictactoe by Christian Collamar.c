#include <stdio.h>

int count = 0;
char TURN[] = "Your turn. What's your move? ";
char PREVIEW[] = "Your move was...";
char VICTORY[] = "GAME OVER. You lose :(";
char TIE[] = " IT'S A TIE! Not bad... try to beat me next time!";


int main()
{
	//setvbuf(stdout, NULL, _IONBF, 0); //this is a temporary solution to eclipse bug 173732

	char ans;
	int move;

	printf("  _____ ___ ____    _____  _    ____    _____ ___  _____  \n");
	printf(" |_   _|_ _/ ___|  |_   _|/ \  / ___|  |_   _/ _ \| ____| \n");
	printf("   | |  | | |   _____| | / _ \| |   _____| || | | |  _|   \n");
	printf("   | |  | | |__|_____| |/ ___ \ |__|_____| || |_| | |___  \n");
	printf("   |_| |___\____|    |_/_/   \_\____|    |_| \___/|_____| \n\n");


	printf("Let's play tic-tac-toe!!\nDo you like me to start first? Y or N : ");
	scanf("%c", &ans);

	//restrict user to type only 'y' or 'n'

	if (ans == 'y')
	{

		printf("\n _______________________  \n");
		printf("|       |       |       | \n");
		printf("|       |       |       | \n");
		printf("|       |       |       | \n");
		printf("|-------+-------+-------| \n");
		printf("|       |'''''''|       | \n");
		printf("|       |'''O'''|       | \n");
		printf("|       |'''''''|       | \n");
		printf("|-------+-------+-------| \n");
		printf("|       |       |       | \n");
		printf("|       |       |       | \n");
		printf("|_______|_______|_______| \n");
		printf("%s", TURN);

		scanf("%i", &move);
		//(input should be >0 AND <=9) AND (!= 5)
		++count;

		switch(move) //main switch
		{
			case 1:
				printf("\n%s", PREVIEW);
				printf("\n _______________________  \n");
				printf("|'''''''|       |       | \n");
				printf("|'''X'''|       |       | \n");
				printf("|'''''''|       |       | \n");
				printf("|-------+-------+-------| \n");
				printf("|       |       |       | \n");
				printf("|       |   O   |       | \n");
				printf("|       |       |       | \n");
				printf("|-------+-------+-------| \n");
				printf("|       |       |       | \n");
				printf("|       |       |       | \n");
				printf("|_______|_______|_______| \n");

				printf("\n My move is...");
				printf("\n _______________________  \n");
				printf("|       |'''''''|       | \n");
				printf("|   X   |'''O'''|       | \n");
				printf("|       |'''''''|       | \n");
				printf("|-------+-------+-------| \n");
				printf("|       |       |       | \n");
				printf("|       |   O   |       | \n");
				printf("|       |       |       | \n");
				printf("|-------+-------+-------| \n");
				printf("|       |       |       | \n");
				printf("|       |       |       | \n");
				printf("|_______|_______|_______| \n");
				printf("%s", TURN);

				scanf("%i", &move);
				//(input should be >0 AND <=9) AND (!= 5) AND (!=1) AND (!=2)
				++count;

				switch(move) //secondary switch under the main switch
				{
					case 3:
						printf("\n%s", PREVIEW);
						printf("\n _______________________  \n");
						printf("|       |       |'''''''| \n");
						printf("|   X   |   O   |'''X'''| \n");
						printf("|       |       |'''''''| \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |       |       | \n");
						printf("|_______|_______|_______| \n");
						printf("REMARKS: I don't think that's a good start...\n");

						printf("\n My move is...");
						printf("\n _______________________  \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|   X   | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|       |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|       |:::O:::|       | \n");
						printf("|_______|:::::::|_______| \n");
						printf("\n%s\n", VICTORY);
						break;
					case 4:
						printf("\n%s", PREVIEW);
						printf("\n _______________________  \n");
						printf("|       |       |       | \n");
						printf("|   X   |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|'''''''|       |       | \n");
						printf("|'''X'''|   O   |       | \n");
						printf("|'''''''|       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |       |       | \n");
						printf("|_______|_______|_______| \n");
						printf("REMARKS: Honestly speaking, that wasn't a good move...\n");

						printf("\n My move is...");
						printf("\n _______________________  \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|       |:::O:::|       | \n");
						printf("|_______|:::::::|_______| \n");
						printf("\n%s\n", VICTORY);
						break;
					case 6:
						printf("\n%s", PREVIEW);
						printf("\n _______________________  \n");
						printf("|       |       |       | \n");
						printf("|   X   |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |'''''''| \n");
						printf("|       |   O   |'''X'''| \n");
						printf("|       |       |'''''''| \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |       |       | \n");
						printf("|_______|_______|_______| \n");
						printf("REMARKS: Lol are you sure with your answer?\n");

						printf("\n My move is...");
						printf("\n _______________________  \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|       |:::O:::|   X   | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|       |:::O:::|       | \n");
						printf("|_______|:::::::|_______| \n");
						printf("\n%s\n", VICTORY);
						break;
					case 7:
						printf("\n%s", PREVIEW);
						printf("\n _______________________  \n");
						printf("|       |       |       | \n");
						printf("|   X   |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|'''''''|       |       | \n");
						printf("|'''X'''|       |       | \n");
						printf("|'''''''|_______|_______| \n");
						printf("REMARKS: Did you just do it on purpose?\n");

						printf("\n My move is...");
						printf("\n _______________________  \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|       |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|       | \n");
						printf("|_______|:::::::|_______| \n");
						printf("\n%s\n", VICTORY);
						break;
					case 9:
						printf("\n%s", PREVIEW);
						printf("\n _______________________  \n");
						printf("|       |       |       | \n");
						printf("|   X   |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |'''''''| \n");
						printf("|       |       |'''X'''| \n");
						printf("|_______|_______|'''''''| \n");
						printf("REMARKS: Let me guess...you did it on purpose, didn't you?\n");

						printf("\n My move is...");
						printf("\n _______________________  \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|       |:::O:::|       | \n");
						printf("|       |:::::::|       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |:::::::|       | \n");
						printf("|   X   |:::O:::|       | \n");
						printf("|_______|:::::::|_______| \n");
						printf("\n%s\n", VICTORY);
						break;
					case 8:
						printf("\n%s", PREVIEW);
						printf("\n _______________________  \n");
						printf("|       |       |       | \n");
						printf("|   X   |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |'''''''|       | \n");
						printf("|       |'''X'''|       | \n");
						printf("|_______|'''''''|_______| \n");
						printf("REMARKS: So far, so good...\n");

						printf("\n My move is...");
						printf("\n _______________________  \n");
						printf("|       |       |       | \n");
						printf("|   X   |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|       |       |       | \n");
						printf("|       |   O   |       | \n");
						printf("|       |       |       | \n");
						printf("|-------+-------+-------| \n");
						printf("|'''''''|       |       | \n");
						printf("|'''O'''|   X   |       | \n");
						printf("|'''''''|_______|_______| \n");

						printf("\n %s", TURN);
						scanf("%i", &move);
						//input should be >0 AND <=9) AND (!= 5) AND (!=1) AND (!=2) AND (!=7) AND (!=8)
						++count;

						switch(move) //thersiary switch under the secondary switch
						{
							case 9:
								printf("\n%s", PREVIEW);
								printf("\n _______________________  \n");
								printf("|       |       |       | \n");
								printf("|   X   |   O   |       | \n");
								printf("|       |       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |       | \n");
								printf("|       |   O   |       | \n");
								printf("|       |       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |'''''''| \n");
								printf("|   O   |   X   |'''X'''| \n");
								printf("|_______|_______|'''''''| \n");
								printf("REMARKS: That wasn't a good move...\n");

								printf("\n My move is...");
								printf("\n _______________________  \n");
								printf("|       |       |:::::::| \n");
								printf("|   X   |   O   |:::O:::| \n");
								printf("|       |       |:::::::| \n");
								printf("|-------+-------+-------| \n");
								printf("|       |:::::::|       | \n");
								printf("|       |:::O:::|       | \n");
								printf("|       |:::::::|       | \n");
								printf("|-------+-------+-------| \n");
								printf("|:::::::|       |       | \n");
								printf("|:::O:::|   X   |   X   | \n");
								printf("|:::::::|_______|_______| \n");
								printf("\n %s", VICTORY);
								break;
							case 4:
								printf("\n%s", PREVIEW);
								printf("\n _______________________  \n");
								printf("|       |       |       | \n");
								printf("|   X   |   O   |       | \n");
								printf("|       |       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|'''''''|       |       | \n");
								printf("|'''X'''|   O   |       | \n");
								printf("|'''''''|       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |       | \n");
								printf("|   O   |   X   |       | \n");
								printf("|_______|_______|_______| \n");
								printf("REMARKS: Sad to say..but the game will be ending with your move...\n");

								printf("\n My move is...");
								printf("\n _______________________  \n");
								printf("|       |       |:::::::| \n");
								printf("|   X   |   O   |:::O:::| \n");
								printf("|       |       |:::::::| \n");
								printf("|-------+-------+-------| \n");
								printf("|       |:::::::|       | \n");
								printf("|   X   |:::O:::|       | \n");
								printf("|       |:::::::|       | \n");
								printf("|-------+-------+-------| \n");
								printf("|:::::::|       |       | \n");
								printf("|:::O:::|   X   |       | \n");
								printf("|:::::::|_______|_______| \n");
								printf("\n %s", VICTORY);
								break;
							case 6:
								printf("\n%s", PREVIEW);
								printf("\n _______________________  \n");
								printf("|       |       |       | \n");
								printf("|   X   |   O   |       | \n");
								printf("|       |       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |'''''''| \n");
								printf("|       |   O   |'''X'''| \n");
								printf("|       |       |'''''''| \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |       | \n");
								printf("|   O   |   X   |       | \n");
								printf("|_______|_______|_______| \n");
								printf("REMARKS: ooh, wrong move...\n");

								printf("\n My move is...");
								printf("\n _______________________  \n");
								printf("|       |       |:::::::| \n");
								printf("|   X   |   O   |:::O:::| \n");
								printf("|       |       |:::::::| \n");
								printf("|-------+-------+-------| \n");
								printf("|       |:::::::|       | \n");
								printf("|       |:::O:::|   X   | \n");
								printf("|       |:::::::|       | \n");
								printf("|-------+-------+-------| \n");
								printf("|:::::::|       |       | \n");
								printf("|:::O:::|   X   |       | \n");
								printf("|:::::::|_______|_______| \n");
								printf("\n %s", VICTORY);
								break;
							case 3:
								printf("\n%s", PREVIEW);
								printf("\n _______________________  \n");
								printf("|       |       |'''''''| \n");
								printf("|   X   |   O   |'''X'''| \n");
								printf("|       |       |'''''''| \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |       | \n");
								printf("|       |   O   |       | \n");
								printf("|       |       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |       | \n");
								printf("|   O   |   X   |       | \n");
								printf("|_______|_______|_______| \n");
								printf("REMARKS: hmm...not a bad move...\n");

								printf("\n My move is...");
								printf("\n _______________________  \n");
								printf("|       |       |       | \n");
								printf("|   X   |   O   |   X   | \n");
								printf("|       |       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|'''''''|       |       | \n");
								printf("|'''O'''|   O   |       | \n");
								printf("|'''''''|       |       | \n");
								printf("|-------+-------+-------| \n");
								printf("|       |       |       | \n");
								printf("|   O   |   X   |       | \n");
								printf("|_______|_______|_______| \n");

								printf("\n %s", TURN);
								scanf("%i", &move);
								//input should be >0 AND <=9) AND (!= 5) AND (!=1) AND (!=2) AND (!=7) AND (!=8) AND (!=3) AND (!=4)
								++count;

								switch(move)// last switch under the thersiary switch under the secondary switch under the main switch
								{
									case 6:
										printf("\n%s", PREVIEW);
										printf("\n _______________________  \n");
										printf("|       |       |       | \n");
										printf("|   X   |   O   |   X   | \n");
										printf("|       |       |       | \n");
										printf("|-------+-------+-------| \n");
										printf("|       |       |'''''''| \n");
										printf("|   O   |   O   |'''X'''| \n");
										printf("|       |       |'''''''| \n");
										printf("|-------+-------+-------| \n");
										printf("|       |       |       | \n");
										printf("|   O   |   X   |       | \n");
										printf("|_______|_______|_______| \n");
										printf("REMARKS: Well at least that move is the best you can...\n");

										printf("\n My move is...");
										printf("\n _______________________  \n");
										printf("|       |       |       | \n");
										printf("|   X   |   O   |   X   | \n");
										printf("|       |       |       | \n");
										printf("|-------+-------+-------| \n");
										printf("|       |       |       | \n");
										printf("|   O   |   O   |   X   | \n");
										printf("|       |       |       | \n");
										printf("|-------+-------+-------| \n");
										printf("|       |       |'''''''| \n");
										printf("|   O   |   X   |'''O'''| \n");
										printf("|_______|_______|'''''''| \n");

										printf("\n %s", TIE);
										break;
									case 9:
										printf("\n%s", PREVIEW);
										printf("\n _______________________  \n");
										printf("|       |       |       | \n");
										printf("|   X   |   O   |   X   | \n");
										printf("|       |       |       | \n");
										printf("|-------+-------+-------| \n");
										printf("|       |       |       | \n");
										printf("|   O   |   O   |       | \n");
										printf("|       |       |       | \n");
										printf("|-------+-------+-------| \n");
										printf("|       |       |'''''''| \n");
										printf("|   O   |   X   |'''X'''| \n");
										printf("|_______|_______|'''''''| \n");
										printf("REMARKS: Well at least that move is the best you can...\n");

										printf("\n My move is...");
										printf("\n _______________________  \n");
										printf("|       |       |       | \n");
										printf("|   X   |   O   |   X   | \n");
										printf("|       |       |       | \n");
										printf("|-------+-------+-------| \n");
										printf("|:::::::|:::::::|:::::::| \n");
										printf("|:::O:::|:::O:::|:::O:::| \n");
										printf("|:::::::|:::::::|:::::::| \n");
										printf("|-------+-------+-------| \n");
										printf("|       |       |       | \n");
										printf("|   O   |   X   |   X   | \n");
										printf("|_______|_______|_______| \n");
										printf("\n %s", VICTORY);
										break;
								} //end  of the last switch
								break; // this break is for case 3
							break; // this break is for case 8
						} // end of the thersiary switch under the secondary switch
				} // this is the end of the secondary switch under the main switch
			break; //this is the break for main case 1 out of case 8
		} // end of main switch
	} //end of the if statement
	else
	{
		printf("Sorry for the inconvinience...\nThe 'n' choice is still under progress.\n");
	}
	if (count <= 2) printf("\nRATING FOR HOW GOOD YOUR MOVES WERE: so bad >_<\n");
	if (count==3) printf("\nRATING FOR HOW GOOD YOUR MOVES WERE: meh. :-\ \n");
	if (count>=4) printf("\nRATING FOR HOW GOOD YOUR MOVES WERE: nice play :-)\n");

	return 0;
}


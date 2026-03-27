#include<stdio.h>
char array[9]={'1','2','3','4','5','6','7','8','9'};
void displayBoard(void)
{

	
	printf("    %c  |     %c |    %c	\n",array[0],array[1],array[2]);
	printf("________________________\n");
	printf("    %c  |    %c  |    %c \n",array[3],array[4],array[5]);
    printf("________________________\n");	
	printf("    %c  |    %c  |    %c \n",array[6],array[7],array[8]);
	
}
int main()
{
	printf("\n\nLET'S PLAY TIC TAC TOE !!!\n\n");
	int player1_win = 0;
	int player2_win =0;
	while (player1_win ==0 && player2_win==0)
	{
		displayBoard();
                printf("\nPlayer 1 (O): type a number : ");
                int choice;
                scanf("%d",&choice);
                array[choice-1]='O';
		if(array[0]=='O'&&array[0]==array[1]&&array[1]==array[2]||array[3]=='O'&&array[3]==array[4]&&array[4]==array[5]||array[6]=='O'&&array[6]==array[7]&&array[7]==array[8]||array[1]=='O'&&array[1]==array[4]&&array[4]==array[7]||array[2]=='O'&&array[2]==array[5]&&array[5]==array[8]||array[0]=='O'&&array[0]==array[3]&&array[3]==array[6]||array[0]=='O'&&array[0]==array[4]&&array[4]==array[8]||array[2]=='O'&&array[2]==array[4]&&array[4]==array[6])
		{player1_win=1;continue;}
                displayBoard();
                printf("\nPlayer 2 (X): type a number : ");
                scanf("%d",&choice);
                array[choice-1]='X';
		//main logic begins here
		if(array[0]=='X'&&array[0]==array[1]&&array[1]==array[2]||array[3]=='X'&&array[3]==array[4]&&array[4]==array[5]||array[6]=='X'&&array[6]==array[7]&&array[7]==array[8]||array[1]=='X'&&array[1]==array[4]&&array[4]==array[7]||array[2]=='X'&&array[2]==array[5]&&array[5]==array[8]||array[0]=='X'&&array[0]==array[3]&&array[3]==array[6]||array[0]=='X'&&array[0]==array[4]&&array[4]==array[8]||array[2]=='X'&&array[2]==array[4]&&array[4]==array[6])
			player2_win=1;
		
	}	
	if (player1_win==1)
		printf("\n\nPlayer 1 WON !\n");
	else if(player2_win==1)
		printf("\n\nPlayer 2 WON !\n");
	else
		printf("\n\nDRAW !\n");
	displayBoard();
	return 0;

    
}

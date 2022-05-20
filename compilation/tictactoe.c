#include "tictactoe.h"

void game()
{
	int gameStatus;
	char value;
	player = 1;
	do
	{
		init_board();
		ask_coord();
		value = (player == 1) ? 'X' : 'O';

		draw_board(value);
		gameStatus = check();
		player++;
	} while (gameStatus == -1);

	if (gameStatus == 1)
	{
		printf("CONGRANTS Player %d,You Win! \n\n", --player);
	}

	else
	{
		printf("==>Game draw\n\n");
	}
	return 0;
}

int check()
{
	int returnValue = 0;

	if (square[1] == square[2] && square[2] == square[3])
	{
		returnValue = 1;
	}
	else if (square[4] == square[5] && square[5] == square[6])
		returnValue = 1;

	else if (square[7] == square[8] && square[8] == square[9])
		returnValue = 1;

	else if (square[1] == square[4] && square[4] == square[7])
		returnValue = 1;

	else if (square[2] == square[5] && square[5] == square[8])
		returnValue = 1;

	else if (square[3] == square[6] && square[6] == square[9])
		returnValue = 1;

	else if (square[1] == square[5] && square[5] == square[9])
		returnValue = 1;

	else if (square[3] == square[5] && square[5] == square[7])
		returnValue = 1;

	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
					 square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		returnValue = 0;
	else
		returnValue = -1;

	return returnValue;
}

int ask_coord()
{
	player = (player % 2) ? 1 : 2;

	printf("Player %d, Please Enter the Coordinate: ", player);
	scanf("%d", &choice);
}

void init_board()
{
	system("clear");

	printf("\n\tTic Tac Toe\n");
	printf("Player 1 (X)  -  Player 2 (O)\n\n");

	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

	printf("     |     |     \n\n");
}

void draw_board(char value)
{
	if (choice == 1 && square[1] == '1')
		square[1] = value;

	else if (choice == 2 && square[2] == '2')
		square[2] = value;

	else if (choice == 3 && square[3] == '3')
		square[3] = value;

	else if (choice == 4 && square[4] == '4')
		square[4] = value;

	else if (choice == 5 && square[5] == '5')
		square[5] = value;

	else if (choice == 6 && square[6] == '6')
		square[6] = value;

	else if (choice == 7 && square[7] == '7')
		square[7] = value;

	else if (choice == 8 && square[8] == '8')
		square[8] = value;

	else if (choice == 9 && square[9] == '9')
		square[9] = value;
	else if (choice > 9 || choice < 1)
	{
		printf("Invalid movement\nYou can only choose places between 1-9 ");
		player--;
	}
	else
	{
		printf("This place already given to element");
		player--;
	}
}
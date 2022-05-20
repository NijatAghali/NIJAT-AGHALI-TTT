#include <stdio.h>
#include <stdlib.h>

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int check();
void init_board();
void draw_board(char mark);
int ask_coord();

#ifndef GAME_H
#define GAME_H

void check(int** tab);

void display_grid(int** grid);

void purger();

void play(Player *player, int** grid,int* posCol, int winornot);

void game(int **grid, Player *player1, Player *player2);

int check_win(int **grid, int* colPos, int colChoice);

#endif

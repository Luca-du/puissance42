///@file game.h
///@brief run the game
///@author Dupouy Lucas

#ifndef GAME_H
#define GAME_H

/// @fn void check(int** tab)
/// @brief check if allocation succeded
/// @param tab[][] to check
/// @return void
void check(int** tab);

/// @fn void display_grid(int** grid)
/// @brief display the grid
/// @param grid to display
/// @param first player, contains his token
/// @param second player, contains his token
/// @return void
void display_grid(int** grid, Player *player1, Player *player2);

/// @fn void purge()
/// @brief clear the keyboard buffer
/// @return void
void purger();

/// @fn int play(Player *player, int** grid,int* colPos, int colChoice, int winornot)
/// @brief run a play of one player
/// @param player who is going to play
/// @param grid of the game
/// @param contains the actual top token of each column (reversed)
/// @param column chosen by the player
/// @param 1 if a player won, 0 else
/// @return void
int play(Player *player, int** grid,int* colPos, int colChoice, int winornot);

/// @fn void game(int** grid, Player* player1, Player* player2)
/// @brief run the game
/// @param grid of the game
/// @param first player
/// @param second player
/// @return void
void game(int** grid, Player* player1, Player* player2);

/// @fn int check_win(int** grid, int* colPos, int colChoice, int winornot)
/// @brief check if a player won
/// @param grid of the game
/// @param contains the actual top token of each column (reversed)
/// @param column chosen by the player
/// @param 1 if a player won, 0 else
/// @return 1 if a player won, 0 else
int check_win(int** grid, int* colPos, int colChoice, int winornot);

/// @fn void endgame(int** grid, Player *player1, Player *player2, int turn, int winornot)
/// @brief display endgame message and free allocated memory
/// @param grid of the game
/// @param first player
/// @param second player
/// @param number of plays
/// @param 1 if a player won, 0 else
/// @param contains the actual top token of each column (reversed)
/// @return void
void endgame(int** grid, Player *player1, Player *player2, int turn, int winornot, int* colPos);

/// @fn free_all(int** grid, Player player1, Player player2, int* colPos)
/// @brief free all the allocated memory
/// @param grid of the game
/// @param first player
/// @param second player
/// @param contains the actual top token of each column (reversed)
free_all(int** grid, Player *player1, Player *player2, int* colPos);

#endif

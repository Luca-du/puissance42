///@file check.h
///@brief allows to know if a player won
///@author Dupouy Lucas

#ifndef CHECK_H
#define CHECK_H

/// @fn int check_horiz(int **grid, int colChoice, int* colPos)
/// @brief check if 4 tokens are aligned left and right of a position in the grid
/// @param grid of the game
/// @param column chosen by the player
/// @param contains the actual top token of each column (reversed)
/// @return 1 if 4 tokens are aligned horizontally, 0 else
int check_horiz(int **grid, int colChoice, int* colPos);

/// @fn int check_vert(int **grid, int colChoice, int* colPos)
/// @brief check if 4 tokens are aligned down (vertically) from a position in the grid
/// @param grid of the game
/// @param column chosen by the player
/// @param contains the actual top token of each column (reversed)
/// @return 1 if 4 tokens are aligned vertically, 0 else
int check_vert(int **grid, int colChoice, int* colPos);

/// @fn int check_diag_up_right(int **grid, int colChoice, int* colPos)
/// @brief chec if 4 tokens are aligned like "/" from a position in the grid
/// @param grid of the game
/// @param column chosen by the player
/// @param contains the actual top token of each column (reversed)
/// @return 1 if 4 tokens are "/" aligned, 0 else
int check_diag_up_right(int **grid, int colChoice, int* colPos);

/// @fn int check_diag_down_right(int **grid, int colChoice, int* colPos)
/// @brief check if 4 tokens are aligned like "\" from a position in the grid
/// @param grid of the game
/// @param column chosen by the player
/// @param contains the actual top token of each column (reversed)
/// @return 1 if 4 tokens are "\" aligned, 0 else
int check_diag_down_right(int **grid, int colChoice, int* colPos);

/// @fn int check_align(int align, int j);
/// @brief check the number of aligned tokens
/// @param number of aligned token
/// @param number to return
/// @return 1 if align>2 (which means that 3 tokens are found aligned around one more "start" token, 0 else
int check_align(int align, int j);

#endif


///@file main.h
///@brief definition of structure "Player"
///@author Dupouy Lucas

#ifndef MAIN_H
#define MAIN_H

typedef struct Player Player;

///@struct Player
///@brief all the infos about players
struct Player
{
  int numberP, wins; ///< the number of a player, and his number of wins
  char pseudo[10]; ///< player's pseudo
  char token[0]; ///< token of a player, chosen on the menu
};

#endif

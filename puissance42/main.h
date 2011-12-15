#ifndef GAME_H
#define GAME_H

typedef struct Player Player;

struct Player
{
  int numberP, wins;
  char pseudo[10];
  char token[0];
};

#endif

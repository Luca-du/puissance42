#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./main.h"
#include "./game.h"
#include "./menu.h"
#include "./check.h"
int no_gui = 0;

int main(int argc, char* argv[])
{
    int **grid;
    int i,j;
    Player *player1=malloc(sizeof(Player));
    Player *player2=malloc(sizeof(Player));
    grid = malloc (6*sizeof(int*));
    for(i=0;i<7;i++)
    {
        grid[i]=malloc(7*sizeof(int));
        for(j=0;j<7;j++)
        {
        grid[i][j]=0;
        }
    }
    for (i=0;i<argc;i++)
    {
      if (strcmp(argv[i],"--nogui") == 0)
        {
            no_gui = 1;
        }
    }
    check(grid);
    menu(player1, player2);
    game(grid, player1, player2);
    return 0;
}

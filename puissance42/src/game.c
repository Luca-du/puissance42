#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./main.h"
#include "./game.h"
#include "./check.h"
extern int no_gui;

void purger()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void check(int** tab)
{
    int i;
    for(i=0; i<6; i++)
    {
        if (tab[i]==NULL)
        {
        fprintf(stderr, "Allocation impossible");
        exit(EXIT_FAILURE);
        }
    }
}

int check_win(int **grid, int* colPos, int colChoice, int winornot)
{
    winornot=check_horiz(grid, colChoice, colPos);
    if(winornot==0)
    {
       winornot=check_vert(grid, colChoice, colPos);
    }

    if(winornot==0)
    {
       winornot=check_diag_up_right(grid, colChoice, colPos);
    }

    if(winornot==0)
    {
       winornot=check_diag_down_right(grid, colChoice, colPos);
    }
    return winornot;
}

void display_grid(int** grid, Player *player1, Player *player2)
{
    int i,j;
    printf("   1     2     3     4     5     6     7   \n\n");
    for (i=0; i<6; i++)
    {
        for (j=0;j<7;j++)
        {
            if (grid[i][j]==1)
            {
                printf("|  %s  ", player1->token);
            }
            else if (grid[i][j]==2)
            {
                printf("|  %s  ", player2->token);
            }
            else
            {
                printf("|     ");
            }
        }
    printf("\n________________________________________\n");

    }
}

int play(Player *player, int** grid,int* colPos, int colChoice, int winornot)
{
    colPos[colChoice]++;
    grid[6-colPos[colChoice]][colChoice-1]=player->numberP;
    winornot=check_win(grid, colPos, colChoice, winornot);
    return winornot;
}

void game(int **grid, Player *player1, Player *player2)
{
    int turn=0, colChoice=8, winornot=0;
    int* colPos;
    colPos=calloc (8,sizeof(int));
    while (turn<42 && winornot == 0)
    {
        if (turn%2==0)
        {
            while ((colChoice>7 || colChoice<1) || colPos[colChoice]>5)
            {
                printf("choisie ta colonne %s (chiffre entre 1 et 7)\n", player1->pseudo);
                scanf("%d",&colChoice);
                purger();
            }
            winornot=play(player1, grid, colPos, colChoice, winornot);
            if (no_gui==0)
            {
                display_grid(grid, player1, player2);
            }
            colChoice=0;
        }
        else
        {
            while ((colChoice>7 || colChoice<1) || colPos[colChoice]>5)
            {
                printf("choisie ta colonne %s (chiffre entre 1 et 7)\n", player2->pseudo);
                scanf("%d",&colChoice);
                purger();
            }
            winornot=play(player2, grid, colPos, colChoice, winornot);
            if (no_gui==0)
            {
                display_grid(grid, player1, player2);
            }
            colChoice=0;
        }turn++;
    }
    endgame(grid, player1, player2, turn, winornot, colPos);
}

void endgame(int** grid, Player *player1, Player *player2, int turn, int winornot, int* colPos)
{
    if(turn%2==1 && winornot==1)
    {
        printf("Bravo %s ! Tu as �cras� %s \n", player1->pseudo, player2->pseudo);
    }
    else if(turn%2==0 && winornot==1)
    {
        printf("Bravo %s ! Tu as �cras� %s \n", player2->pseudo, player1->pseudo);
    }
    else
    {
        printf("Match nul :/");
    }
    free_all(grid, player1, player2, colPos);
}

free_all(int** grid, Player *player1, Player *player2, int* colPos)
{
    free(grid);
    free(player1);
    free(player2);
    free(colPos);
}

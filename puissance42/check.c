#include <stdio.h>
#include <stdlib.h>
#include "./main.h"
#include "./game.h"
#include "./menu.h"
#include "./check.h"


int check_horiz(int **grid, int colChoice, int* colPos)
{
    int i=colChoice, align=0, j=0;
    while(i<8 && grid[6-colPos[colChoice]][colChoice-1]==grid[6-colPos[colChoice]][i])
    {
        i++;
        align++;
    }
    i=colChoice;
    while(i>1 && grid[6-colPos[colChoice]][colChoice-1]==grid[6-colPos[colChoice]][i-2])
    {
        i--;
        align++;
    }
    if (align>2)
    {
        j=1;
    }
    else
    {
        j=0;
    }
    return j;
}

int check_vert(int **grid, int colChoice, int* colPos)
{
    int i=colPos[colChoice], align=0, j=0;
    while(i>1 && grid[6-colPos[colChoice]][colChoice-1]==grid[i][colChoice-1])
    {
        i--;
        align++;
        printf("prout");
    }
    if (align>2)
    {
        j=1;
    }
    else
    {
        j=0;
    }
    return j;
}

int check_diag(int **grid, int colChoice, int* colPos)
{

}

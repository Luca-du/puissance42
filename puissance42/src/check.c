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
   return check_align(align,j);
}

int check_vert(int **grid, int colChoice, int* colPos)
{

    int i=colPos[colChoice], align=0, j=0;
    while(i>1 && grid[6-colPos[colChoice]][colChoice-1]==grid[6-i+1][colChoice-1])
    {
        i--;
        align++;
    }
    return check_align(align,j);
    return 0;
}

int check_diag_up_right(int **grid, int colChoice, int* colPos)
{
    int i=colPos[colChoice], k=colChoice, align=0, j=0;
    while (i<6 && k<8 && grid[6-colPos[colChoice]][colChoice-1]==grid[6-(i+1)][k])
    {
        i++;
        k++;
        align++;
    }
    i=colPos[colChoice];
    k=colChoice;
    while (i>1 && k>1 && grid[6-colPos[colChoice]][colChoice-1]==grid[6-(i-1)][k-2])
    {
        i--;
        k--;
        align++;
    }
    return check_align(align,j);

}

int check_diag_down_right(int **grid, int colChoice, int* colPos)
{
    int i=colPos[colChoice], k=colChoice, align=0, j=0;
    while (i<6 && k>1 && grid[6-colPos[colChoice]][colChoice-1]==grid[6-(i+1)][k-2])
    {
        i++;
        k--;
        align++;
    }
    i=colPos[colChoice];
    k=colChoice;
    while (i>1 && k<8 && grid[6-colPos[colChoice]][colChoice-1]==grid[6-(i-1)][k])
    {
        i--;
        k++;
        align++;
    }
    return check_align(align,j);
}

int check_align(int align, int j)
{
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

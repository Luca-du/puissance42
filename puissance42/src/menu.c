#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./main.h"
#include "./menu.h"
#include "./check.h"

void menu(Player* player1, Player* player2)
{
    printf("*********************************************\n\n");
    printf("                 PUISSANCE 4                 \n\n");
    printf("*********************************************\n\n");
    printf("entrez le nom du joueur 1 : \n");
    scanf("%s", player1->pseudo);
    while(strlen(player1->token)!=1)
    {
        printf("choisie ton jeton %s (un seul caractère)\n", player1->pseudo);
        scanf("%s", player1->token);
    }
    printf("entrez le nom du joueur2 : \n");
    scanf("%s", player2->pseudo);
    while(strlen(player2->token)!=1)
    {
        printf("entrez le jeton du joueur 2 : (un seul caractère)\n");
        scanf("%s", player2->token);
    }
    player1->numberP=1;
    player2->numberP=2;
}

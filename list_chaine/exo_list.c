/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** exo_list.c
*/

#include "list.h"

void add_to_top(Player_t **list, char *name, cat position, int goals, int numero)
{
    Player_t *joueur = malloc(sizeof(Player_t));
    joueur->name = strdup(name);
    joueur->categoy = position;
    joueur->goals = goals;
    joueur->numero = numero;
    joueur->next = *list;
    *list = joueur;
}

void display(Player_t *player)
{
    for (; player != NULL; player = player->next) {
        printf("The player %s wearing number %d has scored %d goals against his former club.\n", player->name, player->numero, player->goals);
    }
}

void add_end_list(Player_t **list, char *name, cat position, int goals, int numero)
{
    Player_t *nouveau_joueur = malloc(sizeof(Player_t));
    nouveau_joueur->categoy = position;
    nouveau_joueur->goals = goals;
    nouveau_joueur->numero = numero;
    nouveau_joueur->name = strdup(name);
    nouveau_joueur->next = NULL;

    Player_t *par = *list;
    if (*list == NULL) {
        *list = nouveau_joueur;
        return;
    }

    for(; par->next != NULL; par = par->next);
    par->next = nouveau_joueur;
   
}

void checkin(Player_t *list)
{
    int number_list = 0;
    while(list != NULL) {
        number_list++;
        list = list->next;
    }
   printf("The linked list contains %d nodes.\n", number_list);
}

void del_top(Player_t **first)
{
    Player_t *ptr = *first;
    *first = (*first)->next;
    free(ptr);
}

void del_end(Player_t **first)
{
    Player_t *ptr = *first;
    Player_t *suppr;

    while (ptr->next != NULL) {
        suppr = ptr;
        ptr = ptr->next;
    }
    suppr->next = NULL;
    free(ptr);
}

void inserposit(Player_t **list, int posi, char *name, cat position, int goals, int numero)
{
    Player_t *newtopo = malloc(sizeof(Player_t));
    newtopo->categoy = position;
    newtopo->goals = goals;
    newtopo->name = strdup(name);
    newtopo->numero = numero;
    newtopo->next = NULL;
    Player_t *ptr = *list;
    int po = 0;
    po++;
    while(po != (posi - 1)) {
        ptr = ptr->next;
        po++;
    }
    newtopo->next = ptr->next;
    ptr->next = newtopo;
}

int main(int argc, char const *argv[])
{
Player_t *first = NULL;
add_to_top(&first, "Rashford", GK, 23, 11);
// add_to_top(&first, "Olise", MID, 3, 17);
add_end_list(&first, "Ruud", STK, 45, 10);
add_end_list(&first, "Tolu",STK, 98, 17);
// inserposit(&first, 3, "Rio", DEF, 7, 5);
// inserposit(&first, 2, "Vidc", DEF, 6, 4);
// del_top(&first);
del_end(&first);
checkin(first);
display(first);
return 0;
}
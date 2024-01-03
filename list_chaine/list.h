/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** list.h
*/

#ifndef LIST_
    #define LIST_

    #include "unistd.h"
    #include "stdlib.h"
    #include "stdio.h"
    #include "string.h"

typedef enum cat {
    GK,
    DEF,
    MID,
    STK
}cat;

typedef struct Player {
    char *name;
    cat categoy;
    int numero;
    int goals;
    struct Player *next;
} Player_t;

#endif
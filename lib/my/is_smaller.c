/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-marin.lagie
** File description:
** is_smaller.c
*/

#include "../../include/my.h"

int is_smaller(int this, int *array, int size)
{
    int smaller = array[this];
    int place = 0;

    for (int i = (this + 1); i < size; i++){
        if (smaller > array[i]) {
            smaller = array[i];
            place = i;
        }
    }
    return place;
}

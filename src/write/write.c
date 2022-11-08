/*
** EPITECH PROJECT, 2022
** write.c
** File description:
** desc
*/

#include "../include/tctype.h"
#include <unistd.h>
#include "../include/tstring.h"

tsize_t twrite(int fb, char *buffer)
{
    return (write(fb, buffer, tstr_len(buffer)));
}

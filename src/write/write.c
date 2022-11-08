/*
** EPITECH PROJECT, 2022
** write.c
** File description:
** desc
*/

#include "../../includes/tctype.h"
#include <unistd.h>
#include "../../includes/tstring.h"

tsize_t twrite(int fb, char *buffer)
{
    return (write(fb, buffer, tstr_len(buffer)));
}

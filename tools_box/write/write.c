/*
** EPITECH PROJECT, 2022
** write.c
** File description:
** desc
*/

#include <tctype.h>
#include <unistd.h>
#include <tstring.h>

tsize_t twrite(int fb, char *buffer)
{
    return (write(fb, &buffer, tstr_len(buffer)));
}

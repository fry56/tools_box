/*
** EPITECH PROJECT, 2022
** str_len.c
** File description:
** desc
*/

extern inline int tstr_len(unsigned char *buffer)
{
    register int count = 0;

    while (buffer[count] != '\0')
        count++;
    return count;
}

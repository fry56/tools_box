/*
** EPITECH PROJECT, 2022
** str_alpha_cmp.c
** File description:
** desc
*/

extern char *swap(char *str_a, char *str_b)
{
    char *temp;
    for (; *str_a != '\0' && *str_b != '\0' ; str_a += 1, str_b += 1) {
        if (*str_a > *str_b) {
            temp = str_a;
            str_a = str_b;
            str_b = temp;
        }
    }
}

char **str_sort_alpha(char **list, int size)
{
    for (int i = 0; list[i] != 0; i++) {
        for (int j = 0; j <= size + 1 - i; j++) {
            swap(list[j], list[j + 1]);
        }
    }
}

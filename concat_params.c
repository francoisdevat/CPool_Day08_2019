/*
** EPITECH PROJECT, 2019
** coucouc
** File description:
** coucou
*/
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);
int  my_putstr(char const * c);
char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char *str = NULL;
    char *std = NULL;
    int len ;

    while (i < argc) {
        len += my_strlen(argv[i]) + 1;
        std = malloc(sizeof(char) * (len + 1));
        if (str != NULL) {
            std = my_strcpy(std, str);
            free(str);
        }
        str = my_strcat(std, argv[i]);
        str[len - 1] = '\n';
        str[len] = '\0';
        i++;
    }
    return (str);
}

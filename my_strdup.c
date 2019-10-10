/*
** EPITECH PROJECT, 2019
** coucou
** File description:
** one piece
*/
#include <unistd.h>
#include <stdlib.h>

int my_strlen (char const *str);
char *my_strcpy (char *dest, char const *src);

char *my_strdup(char const * src)
{
    char  *str;
    
    str = malloc(sizeof(char) * (my_strlen(src) +1));

    if ( str == NULL) {
        return (NULL);
    }
    str = my_strcpy(str, src);
    return (str);
}

/*
** EPITECH PROJECT, 2019
** coucou
** File description:
** one piece
*/

#include <stdlib.h>

int my_strlen (char const *str);
char* my_strcpy (char *dest, char const *src);

char *my_strdup(char const * src)
{
    char* str;
    int longueur = my_strlen(src);
    
    str = malloc(sizeof(int) * (longueur +1));
    
    if ( str == NULL) {
        return (NULL);
    }
    str = my_strcpy(str, src);
    str[longueur - 1] = '\0';
    return (str);
        
}

/*
** EPITECH PROJECT, 2019
** fonction de contage
** File description:
** je comprend rien aux strings
*/

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (1);
}

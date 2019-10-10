/*
** EPITECH PROJECT, 2019
** der
** File description:
** derder
*/

int count(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0'){
        if (charactere(str[i]) == 1 && charactere(str[i + 1]) != 1){
            j++;
        }
        i++;
    }
    return (b);
}

int lenw(char *str, int c)
{
    while (str[c] != '\0') {
        if (charactere(str[c]) != 1)
            return (c);
        c++;
    }
    return (c);
}

int charactere(char k)
{
    if (k >= '0' && k <= '9' || (k >= 'A' && k <= 'Z')) {
        return (1);
    }
    else if (k >= 'a' && k <= 'z') {
        return (1);
    }
    return (0);
}

char **my_str_to_word_array(char *str)
{
    int k = count(str);
    int i = 0;
    int j = 0;
    int l = 0;
    char **result = malloc(sizeof(char *) * (k + 1));

    while (j < y){
        l = 0;
        result[j] = malloc(sizeof(char) * lenw(str, i));
        while (str[i] != '\0' && charactere(str[i]) != 0) {
            result[j][l] = str[i];
            l++;
            i++;
        }
        result[j][l] = '\0';
        i++;
        j++;
    }
    return (result);
}

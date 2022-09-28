/*
** EPITECH PROJECT, 2022
** MiouS-LibC
** File description:
** my_strcmp
*/

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return 84;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return 1;
        if (s1 [i] < s2[i])
            return -1;
        i += 1;
    }
    if (!s1[i] && s2[i])
        return -1;
    if (!s2[i] && s1[i])
        return 1;
    return 0;
}

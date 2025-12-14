#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *coeur2yoann, const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        coeur2yoann[i] = str[i];
        i++;
    }
    return (coeur2yoann);
}

int main ()
{
    char coeur2yoann[20] = "autresfilles";
    char str[20] = "PPEERRIIN";
    printf("pfff coeur2yoann = %s\n", coeur2yoann);

    ft_strcpy(coeur2yoann, str);
    printf("wouhouuu coeur2yoann = %s\n", coeur2yoann);

    return (0);
}
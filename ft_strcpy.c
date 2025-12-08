#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *coeur2yoann, const char *str)
{
    size_t i = 0;
    while (str[i] != '\0')
    {
        coeur2yoann[i] = str[i];
        i++;
    }
    return (coeur2yoann);
}

int main ()
{
    char coeur2yoann[20] = "autresfilles";
    char str[20] = "PPEERRIINNEE";
    printf("pfff coeur2yoann = %s\n", coeur2yoann);

    ft_strcpy(coeur2yoann, str);
    printf("wouhouuu coeur2yoann = %s\n", coeur2yoann);

    return (0);
}
int     ft_isalnum(int c)
{
    if (c >= 65 && c <= 95 || c >= 97 && c <= 122 ||
            c >= 49 && c <= 57)
            return (1);
    return (0);
}

int     ft_isalnum2(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

#include <stdio.h>
#include <ctype.h>
int main ()
{
    printf("%d\n", ft_isalnum('f'));
    printf("%d\n", ft_isalnum('9'));
    printf("%d\n", ft_isalnum('E'));
    printf("%d\n", isalnum('b'));

    return (0);
}
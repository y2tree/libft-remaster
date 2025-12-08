#include <stdio.h>
#include  <ctype.h>
int    ft_isalpha(int c)
{
    if (c >= 65 && c <= 95 || c >= 97 && c <= 122)
        return (1);
    return (0);
}

int main ()
{
    printf("%d\n", ft_isalpha('A')); // pour le main je peux print isalpha car c'est un int
    printf("%d\n", isalpha('A'));
    return 0;
}
int    ft_isdigit(int c)
{
    if (c >= 49 && c <= 57)
        return (c);
    return (0);
}

#include <stdio.h>
int main ()
{
    printf("%d\n", ft_isdigit('9'));
    printf("%d\n", ft_isdigit('e'));

    return (0);
}
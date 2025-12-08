#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= 32 || c <= 126)
        return (1);
    return (0);
}

int main ()
{
    printf("%d\n", ft_isprint(' '));
    printf("%d\n", isprint('e'));
    return (0);
}
#include <string.h>
#include <stdio.h>

size_t      ft_strlen(const char *s)
{
    int i;
    for (i = 0; s[i]; i++)
    {}
    return (i);
}

int main ()
{
    char *s = "123456";
    printf("%zu\n", ft_strlen(s));
    printf("%lu\n", strlen(s));
    return (0);
}
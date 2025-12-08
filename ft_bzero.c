#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *temp = (unsigned char *)s;
    while (n > 0)
    {
        *(temp++) = 0;
        n--;
    }
}
 int main ()
 {
    char s[10] = "perrine";
    ft_bzero(s, 3);
    printf("%s\n", s + 3);
    return (0);
 }
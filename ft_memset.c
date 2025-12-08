#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    int i;
    unsigned char *temp;
    temp = b;

    i = 0;
    ;
    while (i != len)
    {
        temp[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

int main ()
{
    char s[10] = "eerrine";
    ft_memset(s, 'P', 1);
    printf("%s\n", s);
    return (0);

}

// int main ()
// {
//     void *i = ft_memset("miaw", 'c', 2);
//     (unsigned char *)i;
//     printf("%d\n", i);
//     return (0);

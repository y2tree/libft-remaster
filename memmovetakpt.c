#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *t_dst;
    char *t_src;
    size_t i;

    if (!dst && !src)
        return (NULL);
    
    t_dst = (char *)dst;
    t_src = (char *)src;

    if (t_dst > t_src)
        while (len-- > 0)
            t_dst[len] = t_src[len];
    else
    {
        while (i++ < len)
            t_dst[i] = t_src[i];
    }
    return (dst);
}

int main ()
{
    char dst[4] = "miaw";
    char src[4] = "tigr";
    
    ft_memmove(dst, src, 2);
    printf("%s\n", dst);
    memmove(dst, src, 2);
    printf("%s\n", dst);
    return 0;
}

// int main ()
// {
//     char src[4] = "miaw";
//     char dst[4] = "tigr";
//     ft_memmove(dst, src, 2);
//     printf("dst = %s\n", dst);
//     return (0);


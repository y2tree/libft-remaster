#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    
    srcsize = ft_strlen(src);
    
}
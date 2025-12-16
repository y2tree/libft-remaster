// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>


size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    char *tmp_dst;
    char *tmp_src;

    tmp_dst = (char *)dst;
    tmp_src = (char *)src;
    while (tmp_src[n] != '\0')
    {
        
    }

}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    srcsize = ft_strlen(src);

    if (dstsize >= srcsize + 1)
        while (dstsize > 0)
        {
            dst[dstsize] = src[dstsize];
            dstsize--;
        }
    else
        while (dstsize - 1 > 0)
        {
            dst[dstsize] = src[dstsize];
            dstsize--;
        }
    return (srcsize);
        
    
}
#include <stdio.h>
#include <string.h>
int main ()
{
    char dst[8] = "trplmia";
    char src[7] = "mchtyg";
    printf("dst = %s, src = %s\n", dst, src);
    strlcpy(dst, src, 8);
    printf(" et une fois passé dans strlcpy =  %s", dst);
    ft_strlcpy(dst, src, 8);
    printf(" et une fois passé dans strlcpy =  %s", dst);
    int dstsieze = ft_strlen(dst);
    printf("\n%d", dstsieze);
    return (0);
}
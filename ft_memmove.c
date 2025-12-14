#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    /* je declare 2 valeur temp et 1 compteur */
    char    *c_src;
    char    *c_dst;
    size_t  i;
    /* si les deux condition sont NULL , je retourne NULL */
    if (!dst && !src)
        return (NULL);
    /* j'affecte les velaurs au variables temp */
    /* pour ne pas modifier les valeurs original */
    c_dst = (char *)dst;
    c_src = (char *)src;
    i = 0;
    /* verifier si la destination est plus grande que l'adresse */
    /* si oui alors je vais copier de la fin jusqu'au debut */
    if  (c_dst > c_src)
        while (len-- > 0)
        {
            //printf("dst > src, dst = %s\n", c_dst);
            c_dst[len] = c_src[len];
        }
            /* si la destination n'est pas */
    /* alors je vais forcement copier du debut vers la fin */
    else
    {
        while (i++ < len)
        {
            c_dst[i] = c_src[i];
        }
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
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
    i = 0;

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
    char dst[4] = "tigr";
    char src[4] = "miaw";
    ft_memmove(dst, src, 1);
    printf("dst = %s\n", dst);
    return (0);
}

/*
a quoi sert la fonction ft_memmove ?
la fonction ft_memmove sert a copier une adresse dans une autre sans ecraser les données de la destinations
il faut donc premierement innitialiser deux variables temporaire pour les deux adresses plus un compteur
, verifier si les adresses sont null ?
ensuite verifier avec une condition si la destinations est plus grande que la source 
pour savoir si on va copier de droite a gauche ou l'inverse
creer une condition pour la possibilité inverse
retourner dst
*/
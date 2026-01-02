#include <unistd.h>
#include <stdio.h>

void ft_print_fonction(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a != '7')
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb(void)
{
    char c;
    char b;
    char a;

    a = '0';
    b = '1';
    c = '2';
    while (a <= '7')
    {
        while (b < '8')
        {
            while (c < '9')
            {
                ft_print_fonction(a, b ,c);
                if (c != 9)
                    c++;
            }
            ft_print_fonction(a, b ,c);
            b++;
        }
        ft_print_fonction(a, b ,c);
        a++;
    }
    //temp que a ne depasse pas 9 j'ajoute 1,
    // quand c == 9, je n'incremente plus a, mais je passe a b,
    // quand b == 8, je n'incremente plus b, mais je passe a c
    // quand a == 7, je stope le print des vigule espace 
    
}

// 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$

int main ()
{
    ft_print_comb();
    return 0;
}
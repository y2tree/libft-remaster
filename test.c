#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
        char *a,*b;
        a=malloc(100*sizeof(char));
        b=(a+25);
        strcpy(a,"This is just a test");
        strcpy(b,"And this is another test, longer test string.");
        printf("a: %s\nb: %s\n",a,b);
        printf("Now, I am copying b in a, and lets see what happen...\n");
        memcpy(a,b,75);
        printf("a: %s\nb: %s\n",a,b);
}
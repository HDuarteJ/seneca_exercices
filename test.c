#include <stdio.h>

int main (void)
{
    int a = 5, b = 10;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    *p1 = *p2 + 5;
    printf("O conteudo de a: %d\n", a);
}
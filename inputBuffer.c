#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS

/*

*/
void clearInputBuffer();

int main(void)
{
    int num;
    char buf;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("num: %d\n", num);

    clearInputBuffer();
    // while ( getchar()!= '\n') {}


    printf("Enter Y or N: ");
    scanf("%c", &buf);
    printf("%c\n", buf);

    return 0;
}

void clearInputBuffer()
{
    while ( getchar()!= '\n') {};
}
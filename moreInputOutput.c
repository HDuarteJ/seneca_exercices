#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
#define STR_LEN 10
void clearInputBuffer();

struct Product
{
    int upc;
    char description[STR_LEN + 1];
    int qty;
    double price;
};

int main(void)
{
    struct Product example = { 111, "Horse Ox", 10, 74.99};
    char fmtString[100 + 1];
    sprintf(fmtString, "%05d %s %d %.3lf", example.upc, example.description, example.qty, example.price);
    puts(fmtString);

    return 0;
}
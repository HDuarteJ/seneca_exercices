#include <stdio.h>
#include "product.h"
#define MAX_INVENTORY 5

int main(void)
{
    struct ProductInfo inventory[MAX_INVENTORY] = { { 0 } };
    int i;
    for (i=0; i < MAX_INVENTORY; i++)
    {
        inventory[i] = getProductData();
    }
    printf("\n"
            "UPC.  DESCRIPTION  QTD.     TAXABLE.    PRICE\n"
           "----- ------------ -------- ---------- ------\n");
     for (i=0; i < MAX_INVENTORY; i++)
    {
        displayProduct(inventory[i]);
    }

    return 0;
}



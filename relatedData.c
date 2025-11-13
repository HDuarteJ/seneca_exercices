#include <stdio.h>




int getUpc(void);
double getPrice(void);
int getQuantity(void);
char getIsTaxable(void);

void displayProduct(int upc, double price, int quantity, char taxable);

int main(void)
{
    int upc;
    double price;
    int qty;
    char taxable;

    upc = getUpc();
    price = getPrice();
    qty = getQuantity();
    taxable = getIsTaxable();

    displayProduct(upc, price, qty, taxable);

    return 0;

}







int getUpc(void)
{
    int value;
    printf("Enter a UPC: ");
    scanf("%d", &value);

    return value;
}

double getPrice(void)
{
    double value;
    printf("Enter a price: ");
    scanf("%lf", &value);

    return value;
}


int getQuantity(void)
{
    int value;
    printf("Enter a quantity: ");
    scanf("%d", &value);

    return value;
}

char getIsTaxable(void)
{
    char value;
    printf("Is product taxable(Y|N): ");
    scanf("%c", &value);

    return value;
}

void displayProduct(int upc, double price, int quantity, char taxable)
{
    printf("\n"
            "UPC.    QTD.     TAXABLE.    PRICE\n"
           "------- -------- ----------- -------------\n");
    printf("%5d %5d %7c %7.2lf", upc, quantity, taxable, price);

}
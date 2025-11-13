# include <stdio.h>
#define STR_MAX 20

// Function prototypes
struct ProductInfo getProductData(void);
void displayProduct(struct ProductInfo product);

// Structures
struct ProductInfo
{
    int upc;
    char description[STR_MAX + 1];
    double price;
    int qty;
    char taxable;
};

int main(void)
{
    struct ProductInfo product = getProductData();
    displayProduct(product);

    return 0;
}

struct ProductInfo getProductData(void)
{
    struct ProductInfo prod = { 0 };

    printf("Enter a UPC: ");
    scanf("%d", &prod.upc);

    printf("Enter a PRICE: ");
    scanf("%lf", &prod.price);

    printf("Enter a QUANTITY: ");
    scanf("%d", &prod.qty);

    printf("Is product TAXABLE(Y|N): ");
    scanf(" %c", &prod.taxable);
        
    printf("Is product DESCRIPTION: ");
    scanf(" %20[^\n]", prod.description);

    return prod;
}

void displayProduct(struct ProductInfo product)
{
    printf("\n"
            "UPC.  DESCRIPTION  QTD.     TAXABLE.    PRICE\n"
           "------ ----------- --------- ----------- ------\n");
    printf("%d %5s %15d %7c %7.2lf", product.upc, product.description, product.qty, product.taxable, product.price);

}

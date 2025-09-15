#include <stdio.h>

// ############################################################################
// Function prototypes:
// ############################################################################

// Get user input for a product's UPC and return it.
int getUpc(void);

// Get user input for a product's price and return it.
double getPrice(void);

// Get user input for a product's quantity and return it.
int getQuantity(void);

// Calculate total with tax base on given price, quantity and tax rate and return total.
double calculateTotalWithTax(double price, int qty, const double taxRate);

// Display product data formatted for readability.
void displayProductData(int upc, double price, int qty, double total);

// ############################################################################
// Main entry point to the aplication
// ############################################################################


int main(void)
{
    int upc, qty;
    double price, total;
    const double taxRate = 0.13;

    printf("Enter product data...\n");

    upc = getUpc();
    price = getPrice();
    qty = getQuantity();
    total = calculateTotalWithTax(price, qty, taxRate);

    displayProductData(upc, price, qty, total);


    // printf("UPC.    :");
    // scanf("%d", &upc);
    // printf("price.   :$");
    // scanf("%lf", &price);
    // printf("Quantity: ");
    // scanf("%d", &qty);

    // Set the tax part:

    // set total part 
 



    return 0;
}


// Get user input for a product's UPC
int getUpc(void)
{
    int upc;
    printf("UPC.    :");
    scanf("%d", &upc);

    return upc;
}

double getPrice(void)
{
    double price;
    printf("price.   :$");
    scanf("%lf", &price);

    return price;
}

int getQuantity(void)
{
    int qty;
    printf("Quantity: ");
    scanf("%d", &qty);

    return qty;
}
 double calculateTotalWithTax(double price, int qty, const double taxRate)
{
    // total = price * qty * (1 + taxRate);
    return price * qty * (1 + taxRate);
}

void displayProductData(int upc, double price, int qty, double total)
{

    // show the result
    printf("Product data\n"
           "------------\n\n"
           "UPC     :  %d\n"
           "Price   :  $%.2lf\n"
           "Quantity:  %d\n"
           "------------\n"
           "Total.  : %.2lf\n",
           upc, price, qty, total
    );
}
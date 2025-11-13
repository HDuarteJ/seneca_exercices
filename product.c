#include <stdio.h>
#include "product.h"

// Function definitions
// -----------------------------

// Get user input for a product
struct ProductInfo getProductData(void)
{
    // safe empty state
    struct ProductInfo prod = { 0 };

    printf("Enter a UPC: ");
    scanf("%d", &prod.upc);

    printf("Enter product DESCRIPTION: ");
    scanf(" %20[^\n]", prod.description);

    printf("Enter product PRICE: ");
    scanf("%lf", &prod.price);

    printf("Enter a product QUANTITY: ");
    scanf("%d", &prod.qty);

    printf("Is product taxable(Y|N): ");
    scanf(" %c", &prod.taxable);

    return prod;
}

// Display product data
//void displayProduct(struct ProductInfo product)
void displayProduct(const struct ProductInfo* product)
{
    printf("%5d %-20s %5d %7c %7.2lf\n",
           product->upc, product->description,
           product->qty, product->taxable, product->price);
}

// Get user input for a product (efficient method)
void getProductInfo(struct ProductInfo* prod)
{
    printf("Enter a UPC: ");
    scanf("%d", &(*prod).upc);

    printf("Enter product DESCRIPTION: ");
    scanf(" %20[^\n]", prod->description);

    printf("Enter product PRICE: ");
    scanf("%lf", &prod->price);

    printf("Enter a product QUANTITY: ");
    scanf("%d", &prod->qty);

    printf("Is product taxable(Y|N): ");
    scanf(" %c", &prod->taxable);
}

// Get initial inventory product data
void initInventory(struct ProductInfo inv[], int arrSize)
{
    int i;

    for (i = 0; i < arrSize; i++) {
        getProductInfo(&inv[i]);
    }

}

// Display an array of products
void displayAllProducts(struct ProductInfo prods[], int arrSize)
{
    int i;

    // 5 space 5 space 7 space
    printf("UPC   DESCRIPTION          QTY   TAXABLE PRICE\n"
           "----- -------------------- ----- ------- ------------\n");
    for (i = 0; i < arrSize; i++) {
        displayProduct(&prods[i]);
    }
}

// Build a customer order
void createOrder(struct CustomerOrder* order, const struct ProductInfo inv[], int arrSize)
{
    char keepAdding;
    struct Date* dt = &order->timestamp.date;
    struct Time* tm = &order->timestamp.time;

    printf("Enter Order#: ");
    scanf("%d", &order->orderNumber);
    printf("Enter Date and Time [yyyy-mm-dd HH:MM]:");
    //scanf("%d-%d-%d %d:%d", &order->timestamp.date.year,
    //      &order->timestamp.date.month,
    //      &order->timestamp.date.day,
    //      &order->timestamp.time.hour,
    //      &order->timestamp.time.minute);
    scanf("%d-%d-%d %d:%d", &dt->year, &dt->month, &dt->day, 
          &tm->hour, &tm->minute);

    // loop: 
    keepAdding = 'Y';
    while (keepAdding == 'Y') {

        // get item selection
         order->items[order->itemCount] = getProductSelection(inv, arrSize);
         printf("How many do you want?: ");
         scanf("%d", &order->items[order->itemCount].qty);
         order->itemCount++;

        if (order->itemCount >= order->maxItems) {
            keepAdding = 'N';
        }
        else {
            printf("Do you want to add another item?(Y|N):");
            scanf(" %c", &keepAdding);
        }
    }
    
}

// Get customer product selection
struct ProductInfo getProductSelection(struct ProductInfo inv[], int arrSize)
{
    struct ProductInfo selectedProduct = { 0 };
    int i, selection;

    printf("Select the product you want\n"
           "---------------------------\n");
    for (i = 0; i < arrSize; i++) {
        printf("%2d %-20.20s ($%7.2lf)\n", i + 1, inv[i].description, inv[i].price);
    }
    
    printf("Selection: ");
    scanf("%d", &selection);

    selectedProduct = inv[selection - 1];
    
    return selectedProduct;
}

// Display a customer order
void displayCustomerOrder(struct CustomerOrder* order)
{
    int i;
    struct Date* dt = &order->timestamp.date;
    struct Time* tm = &order->timestamp.time;

    printf("Order Number#: %d\n", order->orderNumber);
    printf("Date         : %04d-%02d-%02d\n", dt->year, dt->month, dt->day);
    printf("Time         : %02d:%02d\n", tm->hour, tm->minute);
    printf("--------------------------------------------------\n");
    printf("Items:\n");

    printf("UPC   DESCRIPTION          QTY   TAXABLE PRICE\n"
           "----- -------------------- ----- ------- ------------\n");
    for (i = 0; i < order->itemCount; i++) {
        displayProduct(&order->items[i]);
    }

    printf("\n");
}
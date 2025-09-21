#include <stdio.h>

int getNumMuffins();
double getUnitPrice();
double calculateTaxes(int muffins, int unitPrice);
void outputResult(int muffins, double unitPrice, double taxes);

int main(void)
{
     int muffins = getNumMuffins();
    double unitPrice = getUnitPrice();
    double taxes = calculateTaxes(muffins, unitPrice);
    outputResult(muffins, unitPrice, taxes);
}


// Prompt user to input the number of muffins
int getNumMuffins()
{
    int muffins;

    printf("Please enter the number of muffins purchased: ");
    scanf("%d", &muffins);

    return muffins;
}

// Prompt user to input the price per unit
double getUnitPrice()
{
    double unitPrice;

    printf("Please enter the price of each muffin:  ");
    scanf("%lf", &unitPrice);

    return unitPrice;
}

// Calculate the taxes for the total
double calculateTaxes(int muffins, int unitPrice)
{
    double taxes = 0;

    if (muffins < 6)
    {
        taxes = muffins * unitPrice * 0.13;
    }
    return taxes;
}

// Print the results
void outputResult(int muffins, double unitPrice, double taxes)
{
    double cost = muffins * unitPrice;

    printf("\n");
    printf("Cost of %d muffins at $%.2lf each: %.2lf\n", muffins, unitPrice, cost);
    printf("Taxes: $%.2lf\n", taxes);
    printf("Total: %.2lf\n", cost + taxes);

}
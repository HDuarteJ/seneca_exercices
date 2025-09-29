#include <stdio.h>

// Prototype
int calcSummedNums(int maxNumbers);

int main(void)
{
    int maxNumbers;
    int total;

    // prompt for # of numbers (maxNumbers)
    printf("How many numbers do you want to sum?: ");
    scanf("%d", &maxNumbers);

    // call a function to get the numbers abnd return total/sum
    total = calcSummedNums(maxNumbers);

    //  display what the sum is
    printf("The total is: %d\n", total);


    return 0;
}


int calcSummedNums(int maxNumbers)
{
    // Variables 
    int sum =0;
    int tmpNum;
    int i = 0;

    // create a loop mechanism
    // (while method)
    while (i < maxNumbers)
    {
        // prompt for user input
    printf("Enter a number: ");

    // assign input
    scanf("%d", &tmpNum);

    // add value to total
    sum += tmpNum;

    // add 1 to i (counter)
    i++;
    }
    //return te total sum

    return sum;
}

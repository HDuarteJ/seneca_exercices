#include <stdio.h>
#define MAX_SIZE 10

struct Animal
{
    int tag;
    double weight;
};

int main(void)
{
    int i;
    int total = 0;
    int numbers[MAX_SIZE] = {1, 2, 3, 4};
    // struct Animal horse = {0};
    // double* ptrWeight = NULL;
    printf("Address of array: %p\n\n", numbers);
    for (i = 0; numbers[i] != 0 ; i++)
    {    
        printf("number[%d]=%d (Address: %p)\n", i, numbers[i], &numbers[i]);
        total += numbers[i];  
    }

    return 0;
}

void showNumbers(int nums[], int arrSize)
{
    
}
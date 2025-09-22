// Selection
// -Optional
// -Alternative
// -Multiple Alternative

#include <stdio.h>

void optional(void);
void alternative(void);
void multiAlternative(void);




int main(void)
{   
    // optional();
    // alternative();
    multiAlternative();

    return 0;
}


// Function definitions
// ----------------------------------------------------------------------

void optional(void)
{
    // Chicken time..

    int maxChickens, chickenCount = 0;

    printf("Optional...\n\n");

    // 1. How many chickens should the be?
    printf("How many chickens should you have: ");
    scanf("%d", &maxChickens);

    // 2. Count chickens
    printf("How many chickens did you count: ");
    scanf("%d", &chickenCount);


    // 3. Check... are we missing any?
    if (chickenCount < maxChickens)
    {
        // 4. Missing a chicken?
        //      A: Call the chicken
        printf("Run around fantically calling\n"
               "the missing chicken(s)...CHICKEN, CHIKEN!!\n\n");
        printf("Yeah... Chicken came home\n\n");
    }

    // 5. Otherwise,..Yeah... We hake our chickens.
    printf("Yeah...We have all our chickens!\n");
}

void alternative(void)
{
    // Chicken time..

    int maxChickens, chickenCount = 0;

    printf("Alternative..\n\n");
    // 1. How many chickens should the be?
    printf("How many chickens should you have: ");
    scanf("%d", &maxChickens);

    // 2. Count chickens
    printf("How many chickens did you count: ");
    scanf("%d", &chickenCount);


    // 3. Check... are we missing any?
    if (chickenCount < maxChickens)
    {
        // 4. Missing a chicken?
        //      A: Call the chicken
        printf("Run around fantically calling\n"
               "the missing chicken(s)...CHICKEN, CHIKEN!!\n\n");
        printf("Yeah... Chicken came home\n\n");
    }
    // Are there to many chickens counted?
    else if (chickenCount > maxChickens)
    {
        printf("We know whats for dinner!!!\n"
               "Chicken burgers!!!\n\n");
    }

    // 5. Otherwise,..Yeah... We hake our chickens.
    printf("Yeah...We have all our chickens!\n");
}

void multiAlternative(void)

{
    // Chicken time..

    int maxChickens, chickenCount = 0;

    printf("Alternative..\n\n");
    // 1. How many chickens should the be?
    printf("How many chickens should you have: ");
    scanf("%d", &maxChickens);

    // 2. Count chickens
    printf("How many chickens did you count: ");
    scanf("%d", &chickenCount);


    // 3. Check... are we missing any?
    if (chickenCount < maxChickens)
    {
        // 4. Missing a chicken?
        //      A: Call the chicken
        printf("Run around fantically calling\n"
               "the missing chicken(s)...CHICKEN, CHIKEN!!\n\n");
        printf("Yeah... Chicken came home\n\n");
    }
    // Are there to many chickens counted?
    else if (chickenCount > maxChickens)
    {
        printf("We know whats for dinner!!!\n"
               "Chicken burgers!!!\n\n");
    }
else
    {
        // State we arte great farmers!
        printf("We are great farmers!!!\n\n");
    }


    // 5. Otherwise,..Yeah... We hake our chickens.
    printf("Yeah...We have all our chickens!\n");
}


void multipleAlternativePlus(void)
{
    char category;
    printf("Category  Income MIN  Income Max\n"
           "--------  ----------  ----------\n"
           "A         0           ----------\n"
           "B         20,000.01   ----------\n"
           "C         100,000.01+ ----------\n\n");
    
    printf("State your income category: ")
    scanf("%c", &category)

    printf("Looking up your income range...\n");

    if (category == 'A')
    {
        printf("Your income rangi is: 0 - 20,000.00\n")
    }

    else if (category == 'A')
    {
        printf("Your income rangi is: 20,000.01 - 100,000.00\n")
    }

    else if (category == 'A')
    {
        printf("Your income rangi is: 100,000.01+\n")
    }
        

    
        
}
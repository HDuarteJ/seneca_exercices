#include <stdio.h>

// void relationalPart1(void);
void relationalPart2(void);


int main(void)
{
    relationalPart2();
    return 0;
}

// void relationalPart1(void)
// {
//     int day;
//     printf("Days of week\n"
//            "------------\n"
//            "Sun. -> 0\n"
//            "Mon. -> 1\n"
//            "Tue. -> 2\n"
//            "Wed. -> 3\n"
//            "Thu. -> 4\n"
//            "Fri. -> 5\n"
//            "Sar. -> 6\n");
//     printf("Enter a day of the week (#): ");
//     scanf("%d", &day);

//     printf("Is it Sunday?    : %d\n", day == 0);
//     printf("Is it Monday?    : %d\n", day == 1);
//     printf("Is it Tuesday?   : %d\n", day == 2);
//     printf("Is it Wednesday? : %d\n", day == 3);
//     printf("Is it Thursday?  : %d\n", day == 4);
//     printf("Is it Friday?    : %d\n", day == 5);
//     printf("Is it Saturday?  : %d\n", day == 6);
//     printf("Is it a weekend? : %d\n", day == 6 || day == 0);
// }

void relationalPart2(void)
{
    int age;
    printf("Age Range\n"
           "------------\n"
           "YOUNG -> 1-17\n"
           "ADULT -> 18-64\n"
           "SENIOR -> 65+\n\n"
           "Exception: 0 or negative age 110 or greater\n\n");
    
           
    printf("Enter your age: ");
    scanf("%d", &age);
        // less efficient
    // printf("Are you YOUNG?    : %d\n", age >= 1 && age <= 17);
    // printf("Are you ADULT?   : %d\n", age >= 18 && age <= 64);
    // printf("Are you SENIOR?   : %d\n\n", age >= 65);
    // printf("Is the age an exception?   : %d\n", age <= 0 || age >=  110);

    printf("Are you YOUNG?    : %d\n", age > 0 && age < 18);
    printf("Are you ADULT?   : %d\n", age > 17 && age < 65);
    printf("Are you SENIOR?   : %d\n\n", age > 64);

    // printf("Is the age an exception?   : %d\n", age <= 0 || age >=  110);
    printf("Is the age an exception?   : %d\n", age <= 0 || age >=  110);

    // DeMorgans's law (reverse it!) !NOT...arg...
    printf("Is the age an exception?   : %d\n", !(age > 0 && age < 110));



}
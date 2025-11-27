#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int getMenuSelection();

int main(void)
{
    // int option = 0;

    // while (option == getMenuSelection())
    //     //     {
    //     //         if (option == 1)
    //     //         {
    //     //             printf("Horse");
    //     //         }
    //     //         else if (option == 2)
    //     //         {
    //     //             printf("Cow");
    //     //         }
    //     //         else if (option == 3)
    //     //         {
    //     //             printf("Hen");
    //     //         }

    //     //     }
    //     //     printf("Quitting...");
    //     // }

    //     switch (option)
    //     {
    //     case 1:
    //         printf("Horse");
    //         break;
    //     case 2:
    //         printf("Cow");
    //         break;
    //     case 3:
    //         printf("Hen");
    //         break;
    //     }

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    !(num % 2) ? puts("\tEVEN") : puts("\tODD");
}
int getMenuSelection()
{
    int selection;
    printf("Menu \n"
           "-----------\n"
           "1. Show Horse \n"
           "2. Show Cow \n"
           "3. Show \n"
           "0 Quit \n");

    scanf("%d", &selection);
    return selection;
}
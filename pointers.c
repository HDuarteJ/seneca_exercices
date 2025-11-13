#include <stdio.h>

void changeEye(int eye)
{
    printf("In function changeEye...\n")
    printf("eye value  :%d\n")
}


int main(void)
{
    int i = 0;
    int* ptrI;
    ptrI = &i;
    printf("Variable value                     : %d\n", i);
    printf("Variable memory address            : %p\n", &i);
    printf("Pointer to variable                : %d\n", *ptrI);
    printf("Variable memory address via pointer: %p\n", ptrI);
    printf("Pointer memory address             : %p\n", &ptrI);





}
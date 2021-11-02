#include <stdio.h>
int main()
{
    int var1 = 20; // declaration
    int *intp; // pointer
    intp = &var1;
    printf("adress of var: %x\n", &var1);
    printf("adress stored in intp: %x\n", intp);
    printf("value of *intp: %x\n", *intp);
    return 0;
}

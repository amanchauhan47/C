#include<stdio.h>
//                              Pointer Arithmetic
int main()
{
    int age = 22;
    int *ptr = &age;
    int age2 = 48;
    int *ptr2 = &age2;

    printf("%u and %u is %u\n",ptr,ptr2,ptr2 - ptr);
    ptr2 = &age;

    printf("%u\n",ptr == ptr2);
    //printf("%d\n",d);

    return 0;
}
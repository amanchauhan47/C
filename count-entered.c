#include<stdio.h>
//                 Swapping two variables without using third variable (Self created)
int main()
{
    int a=3,b=1;

    a=a-b;
    b=b+a;
    a=b-a;

    printf("a = %d && b = %d\n",a,b);
    return 0;
}
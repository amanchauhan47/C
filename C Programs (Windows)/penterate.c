#include<stdio.h>
//      With argument without return type.
void sum(int a, int b);
int main()
{
    int a=2,b=48;

    sum(a, b);
    return 0;
}

void sum(int a, int b)
{
    printf("%d\n",a+b);
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10;
    int *y=&x;

    printf("%d\n",x);
    printf("%u\n",&x);
    printf("%u\n",y);
    printf("%d\n",*y);
    printf("%u",&y);
    return 0;
}
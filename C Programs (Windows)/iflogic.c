#include<stdio.h>
int main()
{
    int a=3,b=7,c=1;

    if(a>b && a>c)
    
    {
        printf("%d is largest number.",a);

    }
    if(b>c)
    {
        printf("%d is largest number.",b);
    }
    else
    {
        printf("%d is largest number",c);
    }
    return 0;

}
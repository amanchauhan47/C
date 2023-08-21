#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);

    printf("Enter the number again:");
    scanf("%d",&d);

    if(a*a*a+b*b*b+c*c*c==d)
    {
        printf("Armstrong number.\n");
    }
    else
    {
        printf("Not Armstrong Number.\n");
    }
    return 0;
}
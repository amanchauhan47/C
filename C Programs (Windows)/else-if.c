#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter your Age:\t");
    scanf("%d",&a);

    if(a>=18)
    {
        printf("You are an Adult.");
    }

    else if(a>12 && a<18)
    {
        printf("You are a Teenager.");
    }

    else
    {
        printf("Your are just a Child.");
    }
    return 0;
}
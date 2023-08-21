#include<stdio.h>
int main()          //Power program without function (self created)
{
    int num,power;
    int i,pow=1;

    printf("Enter the number:");
    scanf("%d",&num);

    printf("Enter the power of this number:");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        pow=pow*num;  
    }
   printf("\n%d",pow);
    return 0;
}
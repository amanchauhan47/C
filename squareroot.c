#include<stdio.h>
//              Sqaure Root Program (Self Created)
int main()
{
    int a,i;

    printf("Enter the number: ");
    scanf("%d",&a);

    for(i=0;i<=a;i++)
    {
        if(i*i==a)
        {
            break;
        }
    }
    if(i*i==a)
    printf("Square root is %d\n",i);
    else
    printf("Square root does not exist.\n");
}
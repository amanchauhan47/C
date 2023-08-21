#include<stdio.h>
int main()
{
    int a,d=0,i;

    printf("Enter the number:\t");
    scanf("%d",&a);

    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            d++;
            //printf("%d\n",i);
        }
    }
    if(d==1)
    printf("Prime number.");

    else
    printf("Not Prime.");

    return 0;
}
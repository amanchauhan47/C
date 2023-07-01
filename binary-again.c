#include<stdio.h>
int main()
{
    int num,r,bin=0,d=1;

    printf("Enter the number: ");
    scanf("%d",&num);
    int i=num;
    while(num!=0)
    {
        r=num%10;
        num=num/10;
        if(r==1)
        {
            bin = bin + d;
        }
        d=d*2;
    }
    printf("Decimal of %d is %d\n",i,bin);

    return 0;
}
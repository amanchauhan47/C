#include<stdio.h>
//                              Decimal to Binary Program
int main()
{
    int num,r,n=0;
    int r2,bin=0,i=1;

    printf("Enter the number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        r=num%2;
        num=num/2;

        bin=bin+i*r;
        i=i*10;
    }
    printf("%d\n",bin);
    

    return 0;
}
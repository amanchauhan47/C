#include<stdio.h>
//                  Binary to Decimal Number Program (Self Created)
int main()
{
    int num,fine;
    int d=1,i,r,f=0;

    printf("Enter the Binary Number: ");
    scanf("%d",&num);

    fine=num;
    while(num!=0)
    {
        r=num%10;
        num=num/10;

        if(r==1)
        {
            f=f+d;
        }
        d=d*2;
    }
    printf("\nDecimal Number of %d = %d\n",fine,f);

    return 0;
}
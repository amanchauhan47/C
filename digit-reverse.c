#include<stdio.h>
int main()
{
    int num,d=0,r;

    printf("Enter the number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        r=num%10;
        num=num/10;
        d=d*10+r;
    }
    printf("Digit Reverse is: %d\n",d);

}

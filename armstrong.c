#include<stdio.h>
//              Armstrong number 3 digit only (Self Created)
int main()
{
    int num,d=0,i,r,check;

    printf("Enter the number: ");
    scanf("%d",&num);

    check=num;
    for(i=1;i<=10;i++)
    {
        r=num%10;
        num=num/10;
        d=d+(r*r*r);

    }
    if(d==check)
    {
        printf("%d is an Armstrong number.\n",check);
    }
    
    else
    {
        printf("%d is not an armstrong number.\n",check);
    }

    return 0;
}
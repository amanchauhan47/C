#include<stdio.h>
//              Count the Sum of Entered Digit (Self Created)
int main()
{
    int r,num,d=0,reverse;

    printf("Enter the number: ");
    scanf("%d",&num);


    for(int i=1;i<=10;i++)
    {
        r=num%10;
       // printf("r is %d\n",r);
        num=num/10;
        d=d+r;
        
        
    }
    printf("%d\n",d);
}
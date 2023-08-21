#include<stdio.h>
//                  LCM of two numbers (Self Created)
int main ()
{
    int a,b,c=1,i,d=1;

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    for(i=1;i<=100;i++)
    {
        if(a%c==0 && b%c==0)
        {
            printf("%d\n",c);
            a=a/c;
            b=b/c;
            d=d*c;
        }
        else if(a%c==0 || b%c==0)
        {
            if (a%c==0)
            {
                a=a/c;
                d=d*c;
                printf("%d\n",c);
            }
            else
            {
                b=b/c;
                d=d*c;
                printf("%d\n",c);
            }
        }
        if(c==1 | (a%c!=0 && b%c!=0))
        {
            c++;
        }
    }
    printf("\nThe LCM is %d",d);
    return 0;
}
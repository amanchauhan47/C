#include<stdio.h>
//                     HCF to be continue
int main()
{
    int i,j,a,b,d=1;

    printf("Enter the First number:");
    scanf("%d",&a);

    printf("Enter the Second number:");
    scanf("%d",&b);


    printf("HCF of %d and %d are :-\n",a,b);

    for(j=1;j<=b;j++)
    {
        for(i=1;i<=a;i++)
        {
            if((a%i==0) && (b%j==0) && (i==j) && (i<a) && (i<b))
            {
                d=d*i;
            }
        }
    }
    printf("%d\n",d);

    return 0;
}
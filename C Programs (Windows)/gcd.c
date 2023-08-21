#include<stdio.h>
//                  Finally! GCD program (Self Created)
int main()
{
    int a,b,i,j,d=0,k=0;

    printf("Enter the number:");
    scanf("%d",&a);

    printf("Enter the number:");
    scanf("%d",&b);


    for(j=1;j<=b;j++)
    {
        for(i=1;i<=a;i++)
        {
            if((a%i==0) && (b%j==0) && (i==j))
            {
                if((i>d) && (j>k))
                {
                    d=i;
                    k=j;
                }
            }
        }
    }
    printf("%d",d);
    return 0;
}
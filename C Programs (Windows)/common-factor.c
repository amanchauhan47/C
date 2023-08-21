#include<stdio.h>
//                    Common factors of Two Number Program (Self Created)
int main()
{
    int i,j,a,b;

    printf("Enter the First number:");
    scanf("%d",&a);

    printf("Enter the Second number:");
    scanf("%d",&b);


    for(j=1;j<=b;j++)
    {
        for(i=1;i<=a;i++)
        {
            if((a%i==0) && (b%j==0) && (i==j))
            {
                printf("%d\t%d\n",i,j);
            }
        }
    }

    return 0;
}
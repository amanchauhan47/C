#include<stdio.h>
//                    Highest factor of a Number Program (self created)
int main()
{
    int a,d=0,i;
 
    printf("Enter the number:");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            if((i>d) && (i<a))
            {
                d=i;
            }
        }
    }
    printf("%d",d);

    return 0;
}
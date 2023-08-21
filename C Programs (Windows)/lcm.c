#include<stdio.h>
//                      LCM of a Number Program (Self created)
int main()
{
    int a,d=1,b=1,i,c;

    printf("Enter the number:");
    scanf("%d",&a);

    c=a;
    for(i=1;i<=c;i++)
    {
        if(a%b==0)
        {
            a=a/b;
            d=d*b;
            
            printf("%d\n",b);
        }
        if(b==1 | a%b!=0)
        {
            b++;
        }
    }
    // printf("%d\n",a);
    //         printf("%d\n",d);
    printf("\n%d",d);
    return 0;
}
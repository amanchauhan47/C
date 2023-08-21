#include<stdio.h>
//                  5 to 50 prime numbers (Self Created)
int main()
{
    int a,i,j,d;

    for(i=5;i<=50;i++)
    {
        d=0;
        for(j=1;j<=i;j++)
        {   
            if(i%j==0)
            {
                d++;
            }
        }
    if(d==2)
    {
         printf("%d\n",i);
    }
        
    }
    return 0;
}
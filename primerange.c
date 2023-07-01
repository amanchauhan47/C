#include<stdio.h>
//              Prime Number 1 to range(input)
int main()
{
    int a,b=0;
    int i,j;

    printf("Enter the number: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        b=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                b++;
            }
        }
    if(b==2)
    {
        printf("%d\n",i);
    }
    

    }

    
    return 0;
}
#include<stdio.h>
//              This program will count the number of same elements (Self Created)
int main()
{
    int a,i,j,d,array[5];

    printf("Enter the elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

    for(j=0;j<=32000;j++)
    {
        d=0;
        for(i=0;i<5;i++)
        {
            if(j==array[i])
            {
                d++;
            }
        }
        if(d!=0)
        {
            printf("%d = %d times.\n",j,d);
        }
    }
    printf("Thank You :)");
    return 0;
}
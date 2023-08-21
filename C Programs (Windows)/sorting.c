#include<stdio.h>
//                      Sorting of Array Program (Self Created)
int main()
{
    int a,b,i,j,array[5];

    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

    for(j=-10000;j<=10000;j++)
    {
        for(i=0;i<5;i++)
        {
            if(j==array[i])
            {
                printf("\n%d",j);
            }
        }
    }
    return 0;
}
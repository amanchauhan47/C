#include<stdio.h>
//                      Transpose of a Matrix (Self Created)
int main()
{
    int array[2][3],i,j,b;

    printf("Enter the number:\t");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Given Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }


    printf("Transpose of Matrix:\n");

    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
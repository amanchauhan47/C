#include<stdio.h>
int main()
{
    int array[2][3];
    int i,j;
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    printf("Given array:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of Array:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",array[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
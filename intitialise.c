#include<stdio.h>
//                      Transpose of Matrix (Generalised Program)
int main()
{
    int n,m;

    printf("Enter the size of array:");
    scanf("%d %d",&m,&n);

    int array[m][n];

    printf("Enter the array: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    printf("Given Matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
        
    }
    printf("Transpose of Matrix: \n");
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
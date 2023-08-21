#include<stdio.h>
int main()
{
    int i,j,sum[2][3],array1[2][3],array2[2][3];

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array1[i][j]+array2[i][j]);
        }
        printf("\n");
    }

return 0;
}
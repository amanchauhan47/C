#include<stdio.h>
int main()
{
    int array[2][3]={{1,2,3},{6,7,8}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
    }
    printf("\n");
    return 0;
}
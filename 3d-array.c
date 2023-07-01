#include<stdio.h>
//                  Addition of 3D array.
int main()
{
    int array[2][2][3] = {1,2,3,4,5,9,12,14,15,11,22,33};
    int array2[2][2][3] = {  {{1,2,3},{4,5,6}}, {{12,14,15},{11,22,33}} };
//                                      Both declaring methods are same.
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d\t",array[i][j][k]+array2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
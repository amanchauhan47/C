#include<stdio.h>
int main()
{
    int a,b,i,j,array[2][3];

    printf("Enter the number:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    for(a=0;a<=100;a++)
   {
        for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {   b=array[i][j];
            // printf("%d\n",b);
            if(a==b);
            {
                printf("%d\n",a);
            }
        }
        printf("\n");
   }
    }
    return 0;
}
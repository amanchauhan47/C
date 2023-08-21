#include<stdio.h>
//                     Addition of 2D Arrays program (Self created)
int  main()
{
    int a,i,b,j,c,d;
    int array1[2][3];
    int array2[2][3];
    int sum[2][3];

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
        
    }

    printf("\n");

    for(a=0;a<2;a++)
    {
        for(b=0;b<3;b++)
        {
            scanf("%d",&array2[a][b]);
        }
        
    }

    i=0;
    j=0;
    a=0;
    b=0;

    //printf("\n%d\t",array1[i][j]);
    
    for(c=0;c<2;c++)
    {
        for(d=0;d<3;d++)
        {
            printf("%d\t",array1[i][j]+array2[a][b]);

            j++;
            b++;
        }
        printf("\n");

        j=0;
        b=0;

        i++;
        a++;

    }


    return 0;


}
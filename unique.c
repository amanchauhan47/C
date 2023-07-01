#include<stdio.h>
//              Find the unique no. of Array (Self Created)
int main()
{
    int array[5]={1,1,1,2,3};
    int j,i,d;
    for(j=0;j<=5;j++)
    {
        d=0;
        for(i=0;i<5;i++)
        {
            if(array[i]==j)
            {
                d++;
            }
        }
        if(d==1)
        {
            printf("%d\n",j);
        }
    }
    return 0;
}
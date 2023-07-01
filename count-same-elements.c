#include<stdio.h>
//              Count the repeated no. of array (Self Created)
int main()
{   int i,j,d;
    int array[5]={7,7,7,2,2};

    for(i=1;i<=10;i++)
    {
        d=0;
        for(j=0;j<5;j++)
        {
            if(array[j]==i)
            {
                d++;
            }
            
        }
        if(d!=0)
        {
            printf("%d is %d times.\n",i,d);
        }
    }
    return 0;
}
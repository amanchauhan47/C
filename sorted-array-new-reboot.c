#include<stdio.h>
int main()
{
    int array[5] = {5,4,3,2,1};
    int i,j,c;

    for(j=0;j<4;j++)
    {
        for(i=j;i<4;i++)
        {
            if(array[j] > array[i+1])
            {
                c = array[j];
                array[j] = array[i+1];
                array[i+1] = c;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
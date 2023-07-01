#include<stdio.h>
int main()
{
    int array[5]={5,2,3,3,5};
    int count,i,j;


    for(i=0;i<5;i++)
    {
        count = 0;

        for(j=0;j<5;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        printf("%d is %d times.\n",array[i],count);
    }
    return 0;
}
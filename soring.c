#include<stdio.h>
//                  Try to make sorting program
int main()
{
    int array[5]={8,7,9,2,5};
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(array[j]>array[i+1])
            {
                printf("%d\n",array[j]);
            }
            
        }
    }
    return 0;
}
#include<stdio.h>
//                       Array Reverse (Self Created)
int main()
{
    int array[5],i;

    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    
    }
 printf("\n");
    for(i=4;i>=0;i--)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
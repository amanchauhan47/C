#include<stdio.h>
int main()
{
    int array[5] = {1,5,7,23,9};
    int copy[5];
    int sum = 0;

    for(int i=0;i<5;i++)
    {
        copy[i] = array[i];
        printf("Copy[%d] = %d\n",i,copy[i]);
    }
    return 0;
}
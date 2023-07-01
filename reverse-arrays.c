#include<stdio.h>
//      Reverse Array with old method by Apna C
int main()
{
    int array[5] = {7,4,12,9,11};
    int a, b;
    for(int i=0;i<5/2;i++)
    {
        a = array[i];
        b = array[5-i-1];

        array[5-i-1] = a;
        array[i]     = b;

    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
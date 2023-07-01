#include<stdio.h>
//              Allocate memory to store 5 Prices.
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));
    ptr[0] = 7.8;
    ptr[1] = 9.1;
    ptr[2] = 7.0;
    ptr[3] = 6.8;
    ptr[4] = 10.8;

    for(int i=0;i<5;i++)
    {
        printf("%.2f\n",ptr[i]);
    }
}
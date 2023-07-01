#include<stdio.h>
int main()
{
    // float price = 100;
    // float *ptr = &price;
    // float **ptr = &ptr;

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",i);
    printf("%d\n",*ptr);
    printf("%d\n",**pptr);

    return 0;
}
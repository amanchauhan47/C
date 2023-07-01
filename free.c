#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    
    ptr[0] = 2;
    ptr[1] = 3;
    ptr[2] = 7;
    ptr[3] = 9;
    ptr[4] = 1;

    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }

    free(ptr);

    ptr = (int*) calloc(2, sizeof(int));

    for(int i=0;i<2;i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}
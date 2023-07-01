#include<stdio.h>
//      Create an array of size 5(using calloc) & enter its values from user.
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    printf("Enter the value of Array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }

    return 0;
}
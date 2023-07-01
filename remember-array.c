#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    //int *ptr = array;
    int *ptr = &array[0];


    printf("%d\n",*ptr+1);
    printf("%d\n",*(ptr+1));

    //Remember
    /*

    int *ptr = &array[0]; = int *ptr = array;       Both are same.
    *ptr+1 = *(ptr+1)                               Both are same.

    */
    return 0;
}
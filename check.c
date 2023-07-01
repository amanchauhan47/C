#include<stdio.h>
int main()
{
    int array[2]={22,24};
    int *ptr=array; // *ptr = array; or &array[0]; is same

    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);

    printf("\n\nThank for visiting here.");
    return 0;
}
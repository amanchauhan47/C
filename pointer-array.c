#include<stdio.h>
//                  Some important stuff to know.
int main()
{
    int array[100];
    int *ptr = array;
    
    printf("Enter the elements of Array: ");
    for(int i=0;i<5;i++)    //  &array[0] = array; *ptr+i != *(ptr+i)
    {
        scanf("%d",ptr+i); // array+i = &array[i] = ptr+i
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\t",i[ptr]);// *(array+i) = ptr[i] = i[ptr] = *(ptr+i)
    }
    return 0;
}
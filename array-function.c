#include<stdio.h>
void printarr(int n, int *arr); // int arr[] = int *arr (both are same)
int main()
{
    int array[]={1,2,3,4,5,45};

    printarr(6,array);

    return 0;
}

void printarr(int n, int *arr)
{
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}

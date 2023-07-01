#include<stdio.h>               //Read and Revise
void reverse(int array[],int n);
int main()
{
    
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int array[n];

    printf("Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",array+i);
    }

    reverse(array,n);
    for(int i = 0; i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}

void reverse(int array[],int n){
    for(int i=0;i<n/2;i++)
    {
        int first=array[i];
        int second=array[n-i-1];

        array[i] = second;
        array[n-i-1] = first;
    }
}
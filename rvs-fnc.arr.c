#include<stdio.h>
void printarray(int array[],int n);
void reverse(int array[],int n);
int main()
{
    int array[10]={1,2,3,7,5,9};
    reverse(array,6);
   
    printarray(array,6);
    return 0;
}
void reverse(int array[],int n){
    for(int i=0;i<n/2;i++)
    {
        int first = array[i];
        int second = array[n-i-1];

        array[i] = second;
        array[n-i-1] = first;
    }
}

void printarray(int array[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}
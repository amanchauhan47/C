#include<stdio.h>
void reverse(int *array, int n);
int main()
{
    int array[5] = {1,4,3,6,7};

    reverse(array,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
void reverse(int *array, int n){
    int a,b;
    for(int i=0;i<n/2;i++)
    {
        a = array[i];
        b = array[n-i-1];

        array[i] = b;
        array[n-i-1] = a;
    }
    //return *array;
}
//              With argument with return type (Reverse array)
#include<stdio.h>
int reverse(int array[], int n);
int main()
{
    int array[100];
    int n,i;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    printf("Enter the element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    reverse(array,n);

    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }

    return 0;
}
int reverse(int array[],int n){

    int rev[100],j = n-1;
 
    for(int i=0;i<n;i++)
    {
        rev[j] = array[i];       
        j--;
    }

    for(int i=0;i<n;i++)
    {
        array[i] = rev[i];
    }

    return *array; 
}

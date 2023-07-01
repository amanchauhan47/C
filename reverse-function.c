//              With argument with return type (Reverse array) to be continued..
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

    for(int i=n-1;i>=0;i--)
    { int j=0;
        array[j]=array[i]; 
        //printf("%d\t",array[i]);
      j++;
    }
    return *array; 
}

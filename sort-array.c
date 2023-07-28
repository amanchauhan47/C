#include<stdio.h>
//                           Sorting Array (Self Created).
int main()
{
    int c,n;

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    int array[n];

    printf("Enter the elements of Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    //Sorting array
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(array[i]>array[i+1])
            {
                c = array[i];
                array[i] = array[i+1];
                array[i+1] = c;
            }  
        }
    }
    //print sorted array
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
//                                      Array Sorting with another method (Self Created & Generalised)                            29-07-23
int main()
{   
    int i,j,c,size;

    printf("Enter the size of Array: ");
    scanf("%d",&size);

    int array[size];
    printf("Enter the elements of Array: ");
    //input array
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    //sorting array
    for(j=0; j<size-1 ;j++)
    {
        for(i=j; i<size-1 ;i++)
        {
            if(array[j] > array[i+1])
            {
                c = array[j];
                array[j] = array[i+1];
                array[i+1] = c;
            }
        }
    }
    //output array
    for(int i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
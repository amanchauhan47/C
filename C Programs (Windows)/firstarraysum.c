//              Sum of Elements of Array Program (Self Created)
#include<stdio.h>
int main()
{   int array[5];
    int i,d=0;
    
    printf("Enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }


    for(i=0;i<5;i++)
    { 
        d=d+array[i];
    }
    printf("\nThe sum of the elements of arrays is: %d",d);

    return 0;
}
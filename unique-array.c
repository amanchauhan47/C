#include<stdio.h>
//                      Unique Array Program (Self Created) || Generalised
int main()
{
    int array[100];
    int count,i,j,size,n=0;

    printf("Enter the size of Array: ");
    scanf("%d",&size);

    printf("Enter the elements of Array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<size;i++)
    {
        count = 0;

        for(j=0;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            n++;
            printf("%d is a unique number.\n",array[i]);
        }
        
    }
    if(n==0)
    {
        printf("There is no unique number in given array.\n");
    }
    return 0;
}
#include<stdio.h>//                                                                 7 May 2023
//                  Insert new element in array , Gernalised Program (Self Created)
int main()
{
    int array[100],d;
    int var,s,num,pos;

    printf("Enter the size of array: ");
    scanf("%d",&s);

    printf("Enter the elements of Array: \n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the new element of Array: ");
    scanf("%d",&d);

    printf("Enter the position of this element: ");
    scanf("%d",&pos);

    //d=num;
    //d=array[0];
    printf("\nGiven Array: \t");
    for(int i=0;i<s;i++)
    {
        printf("%d\t",array[i]);
    }

    printf("\nArray after insertion: \t");
    for(int i=0;i<s+1;i++)
    {
        if(i>=pos-1)
        {
            var = array[i];
            array[i] = d;
            d = var;
        }
        
        printf("%d\t",array[i]);
    }
    printf("\n");

    return 0;
}
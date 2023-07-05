#include<stdio.h>
int main()
{
    int a,size, num,pos;
    int array[100];

    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the new element to be inserted: ");
    scanf("%d",&num);

    printf("Enter the position where element is to be inserted: ");
    scanf("%d",&pos);

    printf("\nGiven Array: ");
    for(int i=0;i<size;i++)
    {
        printf("\t%d",array[i]);
    }

    pos = pos-1;
    printf("\nNew Array: ");
    for(int i=0;i<size+1;i++)
    {
        if(i >= pos){
            a = array[i];
            array[i] = num;
            num = a;
        }
        printf("\t%d",array[i]);
    }
    return 0;
}
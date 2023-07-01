#include<stdio.h>
//                              Decimal to Binary using Array
int main()
{
    int num,r,array[100];
    int d=0,i,l;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(i=0;num>0;i++)
    {
        array[i]=num%2;
        num=num/2;
        // printf("%d\n",array[i]);
    }
    l=i;
    for(i=l-1;i>=0;i--)
    {
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}
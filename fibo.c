#include<stdio.h>
int main()
{
    int array[100],n;
    array[0] = 0;
    array[1] = 1;

    printf("Enter the length of fibonacci numbers: ");
    scanf("%d",&n);

    for(int i=0;i<n-2;i++)
    {
        array[i+2] = array[i]+array[i+1];
    }
    printf("This is the fibonacci seq:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}
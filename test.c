#include<stdio.h>
//                  Reverse Array after video complete
void reverse(int *array);
int main()
{   int sum[100];

    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",sum+i);
    }
    reverse(sum);
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d\n",sum[i]);
    // }
    return 0;
}
void reverse(int *array)
{
    //printf("%d\n",*array);
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",*(array+i));
    }

}
#include<stdio.h>
int main()
{
    int adhar[5];
    int *ptr = adhar;
    for(int i=0;i<5;i++)
    {
        printf("%d index : ",i);
        scanf("%d",ptr+i); // or &adhar[i]
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i)); // or adhar[i]
    }
    // printf("%d\n",ptr);
    return 0;
}
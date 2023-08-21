#include<stdio.h>
int main()
{
    char string[10],i;

    for(i=0;i<=10;i++)
    {
        scanf("%c",&string[i]);
    }

    for(i=0;i<=10;i++)
    {
        printf("%c",string[i]);
    }
    return 0;
}
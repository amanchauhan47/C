#include<stdio.h>
//          take string and print it (Self Created) but not a string
int main()
{   char i,l;
    char array[1000];

    for(i=0;1;i++)
    {
        scanf("%c",&array[i]);
        if(array[i]==10)
        {
            break;
        }
    }
    l=i;
    for(i=0;i<=l;i++)
    {
        printf("%c",array[i]);
    }
    return 0;
}
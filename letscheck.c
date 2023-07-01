#include<stdio.h>
int main()
{
    char array[100];
    char i,l;

    printf("Enter the number: ");
    for(i=0;1;i++)
    {
        scanf("%c",&array[i]);
        if(array[i]==10)
        {
            break;
        }
    }
l=i;
    for(i=0;i<l;i++)
    {
        if(array[i]==48 || array[i] == 49)
        {
            if(array[i]==49)
            {
                array[i]= 48;
            }
            else{
                array[i]=49;
            }
        }
        printf("%c",array[i]);
    }
    printf("\n");
    return 0;
}
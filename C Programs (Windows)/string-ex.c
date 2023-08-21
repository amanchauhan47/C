#include<stdio.h>
//                  Print String by Input from user (Self Created 'something new')
int main()
{
    char string[100],i,a=10,l=0;

    for(i=0;1;i++)
    {   
        scanf("%c",&string[i]);
        if(string[i]==10) //ASCII value of "Enter key" is 10;
        {
            break;
        }
        //l=i or l++ (same output)
    }
        l=i;
    for(i=0;i<=l;i++)
    {
        printf("%c",string[i]);
    }
    return 0;
}
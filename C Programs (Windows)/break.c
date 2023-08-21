#include<stdio.h>
int main() // break help to exit from any loops, nested loop, switch and other statements(useful)
{
    int a,b,c,i;

    printf("Enter the number:");
    scanf("%d",&a);

    for(i=1;1;i++)
    {   
        printf("%d\n",i);
        if(i==a)
        {  
            break;  
        }
    }
    return 0;
}
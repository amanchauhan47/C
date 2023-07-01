#include<stdio.h>
        //      Not a perfect, need some modification
int main()
{
    int r,num,q,reverse;

    printf("Enter the number: ");
    scanf("%d",&num);


    for(int i=1;i<=10;i++)
    {
        r=num%10;
        num=num/10;
        if(r==0)
        {
            break;
        }
        printf("%d",r);
    }
    printf("\n");
}
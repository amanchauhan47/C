#include<stdio.h>
int main()          //Full Pyramid Program (Self Created)
{
    int a,b,i,c=1,x;

    printf("Enter the range of pyramid:");
    scanf("%d",&x);                 //x=5

    for(i=1;i<=x;i++)
    {   
        for(a=x;a>=i;a--)
        {
            printf(" ");
        }
        for(b=1;b<=c;b++)
        {
            printf("*");

        }
        c=c+2;
        printf("\n");
        
    }
    return 0;
}
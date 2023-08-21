#include<stdio.h>       //Triangle Program (Self created)
int main()
{
    int a,b,i,d=1;
    
    printf("Enter the number:");
    scanf("%d",&a);       //a=4

    for(i=1;i<=a;i++)
    { 
      for(b=a;b>=i;b--)
      {
        printf(" ");
      }

      for(b=1;b<=d;b++)
      {
        printf("*");
      }
      d=d+2;
      printf("\n");
    }
    return 0;
}
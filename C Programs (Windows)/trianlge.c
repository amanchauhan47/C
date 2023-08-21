#include<stdio.h>       //Triangle Program (Self created)
int main()
{
    int a,b,i;
    
    printf("Enter the number:");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
      for(b=1;b<=i;b++)
      {
        printf("%d",b);
      }
      printf("\n");
    }
    return 0;
}
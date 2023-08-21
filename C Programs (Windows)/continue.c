#include<stdio.h>
// Continue 1 bar skip krta kisi bhi chiz ko (just like 7)
int main()
{
    int a,i;

    printf("Enter the number:");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(i==7)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
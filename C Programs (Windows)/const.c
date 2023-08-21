#include<stdio.h>
#include<conio.h>

int main ()

{    int a,b,c;
    
        scanf("%d%d%d",&a,&b,&c);

        if (a>b&&a>c)
        {
            printf("%d is a",a);
        }

        else if (b>c)
        {
            printf("%d is b",b);
        }

        else
        {
            printf("%d is c",c);
        }
        
    return 0;
}
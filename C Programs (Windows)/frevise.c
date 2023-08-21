#include<stdio.h>
int main ()
{           //with argument without return value
    int a,b,i;

    // printf("%d",3!=7);
    printf("Entr the number:");
    scanf("%d",&a);

    if( a>30 && a<90 )
    {
        printf("A");
    }
    if( a>=90 && a<100 )
    {
        printf("A+");

    }
    else{
        printf("run again");
    }
    return 0;
}

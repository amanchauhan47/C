#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
                                //sizeof is not a function, it is a operator.
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(1));
    printf("%d\n",*a);
    printf("%d\n",&a);
    printf("%d\n",sizeof(float));   
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short int));
    printf("%d\n",sizeof(long double));
    return 0;
}
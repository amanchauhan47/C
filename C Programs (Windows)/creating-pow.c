#include<stdio.h>
int pow(int a){
    //a=a*a;
    return a*a;
}
int main()
{
    int a;

    printf("Enter the number:\t");
    scanf("%d",&a);

    printf("%d",pow(a));
    return 0;
}
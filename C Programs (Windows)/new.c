#include<stdio.h>
#include<conio.h>
//Area of a Circle
int main()
{
    float r;
   const float pi=3.14;

    printf("Enter the number:");
    scanf("%f",&r);

    printf("Area of circle: %f",r*r*pi);
    return 0;
}
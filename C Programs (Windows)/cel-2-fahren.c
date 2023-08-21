#include<stdio.h>
float convert(float celsius);

int main()
{
    int f;
    
    printf("Enter the Fahrenheit value: ");
    scanf("%d",&f);
    printf("%.2f",convert(f));
    return 0;
}

float convert(float celsius){
    float far = celsius * 1.8 + 32; //formula of fahrenheit = celsius * (9/5) + 32
    return far;
}
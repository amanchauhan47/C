#include<stdio.h>
int main()
{
    float dollar,inr;
    int op;

    printf("Enter the amount of dollar : $");
    scanf("%f",&dollar);

    printf("\nINR = ₹%.2f\n",dollar*81.85);
    return 0;


}
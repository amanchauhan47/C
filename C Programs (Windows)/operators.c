#include<stdio.h>
//Password cracking program.
int main()
{
    int a,b,c,x,y,z,num1,num2,num3;

    printf("Enter your four digit pin:\t");
    scanf("%d",&a);

    for (x=0;x<=9999;x++)
    {
        if(a==x)
        break;
        //jump to cracked
    }
    if(a!=x)
    printf("You have entered five digit number.");
    else
    printf("Your PIN is Sucessfully cracked which is %d",x);
    // if(a!=x)
    // printf("\nYour pin is five digit number");
    return 0;
}
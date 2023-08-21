#include<stdio.h>
int main()
{
    char c='a';


    printf("Enter the number:\t");
    scanf("c",c);

    if(c>=0 || c<0)
    {
        printf("You have entered a Digit.");
    }

    else{
        printf("You have not entered a Digit");
    }
    return 0;
}

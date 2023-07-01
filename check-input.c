#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);

    if(a>=48 && a<=57)
    {
        printf("Digit\n");
    }
    else if(a>=33 && a<=47 || a>=58 && a<=64)
    {
        printf("Special Characters\n");
    }
    else if (a>=65 && a<=90)
    {
    printf("Upper case Alphabet\n");
    }
    else if (a>=97 && a<=122)
    {
    printf("Lower case Alphabet\n");
    }
    else{
        printf("You have entered wrong character.");
    }

    //else if ()
    return 0;
    

}
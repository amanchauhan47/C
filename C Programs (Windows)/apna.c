#include<stdio.h>
//              Check Upper case and Lower case character
int main()
{
    char ch;

    printf("Enter the number:\t");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <='Z'){
        printf("Upper case");
    }
    else if (ch >='a' && ch <='z'){
        printf("Lower case");
    }
    else{
        printf("Not a Alphabet");
    }

    return 0;
}
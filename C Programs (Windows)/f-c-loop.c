#include<stdio.h>
//              Float and char with For Loop
int main()
{
    for(char ch='A'; ch<='Z'; ch++)
    // also write ch=65 ; ch<=90 ; ch++ (becoz ASCII value of A is 65, similarly for Z is 190)
    {
        printf("%c\n",ch);
    }

    for(float f=1.0; f<=10.0; f++)
    
    {
        printf("%f\n",f);
    }
    return 0;
}
#include<stdio.h>
//                                     Compare Two strings are equal or not (Self Created);
int main()
{
    char str1[50] = "Aman";
    char str2[50] = "Aman";
    int i;

   for(i=0; str1[i]!='\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            break;
        }
    }

    if(str1[i] == str2[i])
    printf("Both Strings are same.\n");

    else if(str1[i] != str2[i])
    printf("Both Statements are not same.\n");

    return 0;
}

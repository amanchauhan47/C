#include<stdio.h>
void checkchar(char *str, char ch);
int main()
{
    char str[100] = "Hello World";
    char ch = 'o';
    checkchar(str,ch);
    return 0;

}

void checkchar(char *str, char ch){
    for(int i=0; str[i] != '\0' ;i++)
    {
        if(str[i] == ch)
        {
            printf("This character exist in this string.");
            return;
        }
    }
    printf("This character is not exist.");
}
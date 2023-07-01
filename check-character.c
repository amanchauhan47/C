#include<stdio.h>
void checkchar(char *string,char ch);
int main()
{
    char string[100] = "Hello World";
    char ch = 'o';
    checkchar(string,ch);
    return 0;
}

void checkchar(char *string, char ch){

    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i] == ch)
        {   
            printf("Exist.");
            return;
        }
    }
    printf("Not exist.");

}
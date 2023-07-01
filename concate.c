#include<stdio.h>
//                      Concate C program                                                       A-MAN
int concate(char *str1, char *str2);
int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";

    concate(str1,str2);
    puts(str1);
    return 0;
}

int concate(char *str1, char *str2){
    int i,j=0;
    for(i=0;1;i++)
    {
        if(str1[i] == '\0')
        {
            for(j=0; str2[j]!='\0' ;j++)
            {
                str1[i] = str2[j];
                i++;
            }
            str1[i] = '\0';
            break;
        }
    }
    return *str1;
}
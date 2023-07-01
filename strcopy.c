#include<stdio.h>
#include<string.h>
//                      
char copy(char dest[], char src[]);
int main()
{
    char str1[100] = "Amanaa";
    char str2[100] = "Hello";

    //strcpy(str1,str2);    string.h (library)

    copy(str1,str2);//  My strcopy function 
    puts(str1);

    return 0;
}
char copy(char dest[], char src[]){
    for(int i=0; src[i]!='\0' ;i++)
    {
        dest[i]=src[i];
    }
    return *dest;
}
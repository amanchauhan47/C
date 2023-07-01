#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("write.txt","a");

    char ch='A';
    fprintf(ptr,"%c",ch);


    fclose(ptr);
    return 0;
}
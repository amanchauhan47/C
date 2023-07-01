#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("eof.txt","r");

    char ch;

    ch = fgetc(fptr);
    while(ch != EOF)
    {
        // fscanf(fptr,"%c",&ch); not working
        // printf("%c",ch);
        
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
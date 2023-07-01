#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch;
    // ch = fgetc(fptr);
    fscanf(fptr,"%c",&ch);
    while(ch!=EOF)
    {   
        printf("%c",ch);
        ch = fgetc(fptr);
        //fscanf(fptr,"%c",&ch) not working inside loop
    }
    

    fclose(fptr);
    return 0;
}
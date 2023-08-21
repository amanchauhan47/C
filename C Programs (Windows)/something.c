#include<stdio.h>
//              Copy file program (Self Created)
int main()
{
    FILE *fptr;
    FILE *newptr;
    fptr = fopen("source.txt","r");
    newptr = fopen("copyfile.txt","w");
    
    char ch;

    ch = fgetc(fptr);
    while(ch!=EOF)
    {   
        fprintf(newptr,"%c",ch);
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    fclose(newptr);

    return 0;
}
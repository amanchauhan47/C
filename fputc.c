#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("fputc.txt","w");

    //fprintf(fptr,"%c",'M'); work like this
    fputc('A',fptr);
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);

    fclose(fptr);

    return 0;
}
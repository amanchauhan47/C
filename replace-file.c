#include<stdio.h>
//        a&b are written in a file, replace them with their sum.
int main()
{
    FILE *fptr;
    fptr = fopen("replace.txt","r");

    int a,b;

    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);

    fclose(fptr);

    fptr = fopen("replace.txt","w");
    fprintf(fptr,"%d\n",a+b);
    
    fclose(fptr);
    return 0;
}
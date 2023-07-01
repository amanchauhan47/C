#include<stdio.h>
int main()
{
    char name[100];

    //gets(name);   dangerous and outdated which is unsafe.
    fgets(name,100,stdin);

    puts(name);
    return 0;
}
#include<stdio.h>
int main()//                         String using Array
{
    char *change = "Hello World";
    puts(change);
    change = "Hello"; //            can be reinitialized
    puts(change);

    char notchange[] = "Wild Animals";
    puts(notchange);
    //notchange = "Wild";//           cannot be reinitialzied
    puts(notchange);



    return 0;
}
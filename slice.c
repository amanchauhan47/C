#include<stdio.h>
//                      Slice program
void slice(char *name, int n, int m);
int main()
{
    char name[100];

    fgets(name,100,stdin);

    slice(name,3,6);
    //puts(name);
    return 0;
}

void slice(char *name,int n, int m){
    char newslice[100];
    int i,j;
    for(i=n ,j=0;i<=m;i++,j++)
    {
       newslice[j] = name[i];
    }
    newslice[j] = '\0';
    puts(newslice);
}
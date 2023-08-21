#include<stdio.h>
int main()
//              Print Table form Range like 2 to 5.
{
    int i,j;

    for(i=2;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
    printf("\n");
    }
    return 0;
}
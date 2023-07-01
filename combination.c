#include<stdio.h>
//          Combination of 1,2,3 (Self Created)
int main(){
    int i,j;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            //printf("%d %d\n",i,j);
            for(int k=1;k<=3;k++)
            {
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}
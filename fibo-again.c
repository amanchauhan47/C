#include<stdio.h>
int main()
{
    int fibo[100],n;

    printf("Enter numbers of fibonacci seq. :");
    scanf("%d",&n);

    fibo[0]=0;
    fibo[1]=1;
    for(int i=0;i<n;i++)
    {
        fibo[i+2]=fibo[i]+fibo[i+1];
        //printf("%d\n",fibo[i+2]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",fibo[i]);
    }
    return 0;
}
#include<stdio.h>       
//                           Fibonacci Number (Self Created)
int main()
{
    int i,n;

    printf("Enter the range of fibonacci number: ");
    scanf("%d",&n);

    int array[n];
    
    array[0]=0;
    array[1]=1;
    
    /*printf("%d\n",array[0]);
    printf("%d\n",array[1]);*/

    for(int i=0;i<n;i++)
    {
        array[i+2]=array[i]+array[i+1]; //important
        printf("%d\n",array[i+2]);
    }


    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\n",array[i]);
    // }                    Its working..
    return 0;
}
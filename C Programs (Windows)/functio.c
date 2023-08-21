#include<stdio.h>
void table(int n);
int main()
{   int n,d;
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    table(n);// argument (actual parameter)
    
    return 0;
}
void table(int n){
    for(int i=1;i<=10;i++) // parameter (formal parameter)
    {
        printf("%d\n",i*n);
    }
}
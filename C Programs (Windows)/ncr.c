#include<stdio.h>       //NCR Program (self created)
int main()
{
    int n,i,r,d=1,a=1,b=1,f,factorial;
    printf("Enter the number:");
    scanf("%d",&n);             //n=3

    printf("Enter the number:");      //r=2
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
    
    d=d*i;
    }

    for(i=1;i<=n;i++)
    {
    
    b=b*i;
    }

    f=n-r;

    for(i=1;i<=f;i++)
    {
        a=a*i;
    }
    printf("%d\n",b);
    printf("%d\n",d);

    //factorial=b/a*d; agr aise kra to left to right associativity wla rule lag jayega kyuki * and / dono same level ke operator hai.. 

    factorial=b/(a*d);
    
    printf("\aThe NCR is :%d",factorial);



    return 0;

}
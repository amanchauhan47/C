#include<stdio.h>
//                  Digit Reversing (Two Digit number only)
int main()
{
    int r,q,rev,n;

    printf("Enter the number (two digit number only):\t");
    scanf("%d",&n);

    r=n%10;
    q=n/10;
    rev=10*r+q;

    printf("%d",rev);

    return 0;
}
#include<stdio.h>
//              Array Reversed with another method. (Self Created)
int main()
{
    int array[5] = {1,12,3,34,7};
    int rev[5],j=0;

    for(int i=4;i>=0;i--)
    {
        rev[j] = array[i];
        j++;
    }
    for(int i=0;i<5;i++)
    {   
        array[i] = rev[i];
        printf("%d\t",array[i]);
    }
    
    return 0;
}
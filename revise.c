#include<stdio.h>
void reverse( int array[],int n);

int main()
{
    int array[5]={1,2,37,4,5};
    reverse(array,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;


}
void reverse(int array[],int n){
    for(int i=0;i<n/2;i++)
    {
        int first = array[i];
        int second = array[n-1];

        array[i] = second;
        array[n-1] = first;
        n--;
    }

}
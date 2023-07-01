#include<stdio.h>
void table(int array[][10], int n);
int main()
{
    int array[2][10];
    table(array[2][10],2);
    table(array[2][10],3);

    return 0;
}

void table(int array[][10],int n){
    int j;
    for(int i=0;i<10;i++)
    {
      array[j][i]=n*(i+1);
      printf("%d\n",array[j][i]);
    }
    j++;
}
#include<stdio.h>
void copy(int source[], int target[]);
int main()
{
    int array[5] = {1,4,7,2,9};
    int array2[5] = {1,1,1,1,1};
    int sum = 0;
    copy(array,array2);
    
    for(int i=0;i<5;i++)
    {
        printf("%d\n",array2[i]);
    }
    return 0;
}
void copy(int source[], int target[]){
    for(int i=0;i<5;i++){
        target[i] = source[i];
        //printf("%d\t",target[i]);
    }
}
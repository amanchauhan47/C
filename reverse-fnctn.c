#include<stdio.h>
//                  Reverse an Array Function Program
void reverse(int *array);
int main(){
    int array[5]={1,2,7,4,5};
    reverse(array);
}
void reverse(int *array){ //or int array[] (Both are same)

    for(int i=4;i>=0;i--)
    {
        printf("%d\t",array[i]);
    }
}
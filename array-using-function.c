#include<stdio.h>
void firstmethod(int array);
void secmethod(int array[]);

int main()
{
    int array[5] = {1,2,54,7,2};
    //firstmethod(array[2]);
    secmethod(&array[0]);           //array = &array[0];   (Both are same.)


    return 0;
}

void firstmethod(int array){
    printf("%d\n",array);
}
void secmethod(int array[]){
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
}
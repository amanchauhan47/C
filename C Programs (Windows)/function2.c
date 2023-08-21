#include<stdio.h>
//                  With Argument Without Return Value
void star(int n){
    for(int i=0;i<n;i++){
    printf("%c",'*');
    }
}
int main()
{   
    star(4);
    return 0;
}

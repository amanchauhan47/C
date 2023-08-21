#include<stdio.h>
//                  With Arguments with Return value
 int sum(int x, int y);

int main(){
    int a=4,b=6,c;

    c=sum(a,b);
    printf("%d",c);

}
int sum(int x, int y){
    return x+y;
}

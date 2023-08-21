#include<stdio.h>
void func();
int main()
{
    func();
    func();
    func();
}
void func(){
    static int i=1;
    printf("%d\n",i);
    i++;
}
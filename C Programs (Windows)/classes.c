#include<stdio.h>
//int a = 50;
void func();
//extern int a = 50;
 int a = 52;
int main()
{
    int a = 20;

    printf("%d\n",a);
    printf("%d\n",a++);
    {
        printf("%d\n",a);
    }
    func();

    return 0;
}
void func(){
    printf("%d\n",a);
}
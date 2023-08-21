#include<stdio.h>
void print(int count);
int main()
{
    int a,b,c;

    print(5);

    return 0;
}

// Recursive Function
void print(int count){
    if(count==0)
    {
        return;// return ke age kuch nhi likha kyuki iska return type void h(jb kuch nhi likhte mtlab khali h)
    }
    printf("Hello World\n");
    
    print(count-1);

}
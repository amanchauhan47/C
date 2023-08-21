#include<stdio.h>
//                      Area of Square, Circle, Rectangle (Using Functions)
int circle(float r);
int square(int s);
int rectangle(int l, int b);

int main()

{
    int a=2,b=24;

    // int ans=rectangle(a,b);
    printf("Area of Rectangle is %d.\n",rectangle(a, b));


    int s=4;

    // int ans=square(s);
    printf("Area of Square is %d.\n",square(s));


    // int r=2;

    // float ans=circle(r);
    // printf("Area of Circle is %.2f",ans);

    return 0;
    
}


//functions

int circle(float r){
    return r*r*3.14;
}


int rectangle(int l, int b){
    return l*b;
    

}
int square(int s){
    return s*s;
}
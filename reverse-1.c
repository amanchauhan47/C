#include<stdio.h>
//                  Digit Reversing (Self Created)
int main(){
    int num,r;
    int d=0;

    printf("Enter the number : ");
    scanf("%d",&num);

    while(num!=0){
        
        r=num%10;
        num=num/10; // or num /= 10
        d=d*10+r;
    }
    printf("Reverse number = %d\n",d);
    
}
#include<stdio.h>
//              Sum of two Vectos using structure
struct vectors{
    int x;
    int y;
};
void addvector(struct vectors v1, struct vectors v2, struct vectors sum);
int main()
{
    struct vectors v1 = {5, 7};
    struct vectors v2 = {3, 2};
    struct vectors sum = {0};

    addvector(v1,v2,sum);
    
    return 0;
    
}
void addvector(struct vectors v1, struct vectors v2, struct vectors sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is %d\n",sum.x);
    printf("Sum of y is %d\n",sum.y);
}
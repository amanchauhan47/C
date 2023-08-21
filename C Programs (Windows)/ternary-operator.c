#include<stdio.h>
//                       Ternary Operator
int main()
{
    int age;
    printf("Enter the age:\t");
    scanf("%d",age);

//  Condition ? do something if TRUE : do something if FALSE;
    age >= 18 ? printf("Adult\n") : printf("Not Adult\n");

    return 0;

}
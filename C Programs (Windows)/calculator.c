#include<stdio.h>
//                  Easy Calculator Program(Self Created)
int main()
{
    int b,d,i,a;
    char c;


    printf("Enter the operator (+,-,*,/,%%) :\t");
    scanf("%c",&c);

    switch(c){
        case '+' : {
                printf("Enter the First Number:");
                scanf("%d",&a);

                printf("Enter the Second Number:");
                scanf("%d",&b);

                printf("%d\t",a+b);
                break;
        }
        case '-' : {
                printf("Enter the First Number:");
                scanf("%d",&a);

                printf("Enter the Second Number:");
                scanf("%d",&b);

                printf("%d\t",a-b);
                break;
        }
        case '*' : {
        printf("Enter the First Number:");
                scanf("%d",&a);

                printf("Enter the Second Number:");
                scanf("%d",&b);

                printf("%d\t",a*b);
                break;
        }
        case '/' : {
        printf("Enter the First Number:");
                scanf("%d",&a);

                printf("Enter the Second Number:");
                scanf("%d",&b);

                printf("%d\t",a/b);
                break;
        }

        case '%' : {
        printf("Enter the First Number:");
                scanf("%d",&a);

                printf("Enter the Second Number:");
                scanf("%d",&b);

                printf("%d\t",a%b);
                break;
        }
    
    }
    printf("Thank You :)");
    return 0;
}
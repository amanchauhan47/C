#include<stdio.h>
typedef struct bankinformation{
    char name[100];
    int acno;
}bankinfo;
int main()
{
    bankinfo b1 = {"Ranjani",2005};
    bankinfo b2 = {"Aman",2004};
    bankinfo b3 = {"Abhishek",2003};

    printf("%s\n",b1.name);
    printf("%d\n\n",b1.acno);

    printf("%s\n",b2.name);
    printf("%d\n\n",b2.acno);

    printf("%s\n",b3.name);
    printf("%d\n\n",b3.acno);


    return 0;
}
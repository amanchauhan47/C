#include<stdio.h>

void gstprice(float n);
int main()
{
    int a;

    printf("Enter the price of item: ");
    scanf("%d",&a);

    gstprice(a);

    printf("%d\n",a);// changes to paramaeter in function don't change the value in calling function or argument.
    //(function me hm us value ko kitna bhi change kre lekin argument me akr vo change nhi hoga)
    return 0;
}


void gstprice(float n){
    float gst;
    gst = n+(n*0.18);

    printf("Final price is %.2f\n",gst);
}
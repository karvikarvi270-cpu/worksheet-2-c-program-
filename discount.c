#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the purchase amount=\n");
    scanf("%d",&a);
    if(a>=2000)
    {
        b=a*0.05;
        printf("discount amount is %d \n",b);
        c=a-b;
        printf("final amount is %d\n",c);
    }
    else
    {
        printf("no discount\n");
    }
}
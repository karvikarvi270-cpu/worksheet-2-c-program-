#include<stdio.h>
int main()
{
    int a,e;
    printf("enter the monthly salary amount=\n");
    scanf("%d",&a);
    if(a>=25000)
    {
        e=a*5;
        printf("loan amount is %d",e);
    }
    else
    {
        printf("not eligible for loan");
    }
}
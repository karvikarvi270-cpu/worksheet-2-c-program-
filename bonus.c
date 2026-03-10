#include<stdio.h>
int main()
{
    int a,d,c;
    printf("enter the salary amount=\n");
    scanf("%d",&a);
    if(a>=50000)
    {
        d=a/10;
        printf("bonus amount is%d",d+a);
    }
    else
    {
        c=a/5;
        printf("bonus amount is%d",c+a);
    }
}
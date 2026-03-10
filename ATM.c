#include<stdio.h>
int main()
{
    int a=10000;
    int b;
    printf("enter the amount =\n");
    scanf("%d",&b);
    if(a>=b)
    {
        printf("Transaction Successful %d",b);
    }
    else
    {
        printf("Insufficient Balance %d",b);
    
    }
    return 0;
}
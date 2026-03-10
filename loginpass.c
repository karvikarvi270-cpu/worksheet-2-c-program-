#include<stdio.h>
int main()
{
    int a=27082007,b;
    printf("enter the password=\n");
    scanf("%d",&b);
    if(b==a)
    {
        printf("login successful");
    }
    else
    {
        printf("incorrect password");
    }
}
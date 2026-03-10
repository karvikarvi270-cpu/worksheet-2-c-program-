#include<stdio.h>
int main()
{
    int a,c;
    printf("enter the age:\n");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("eligible to vote\n");
    }
    else
    {
        printf("not eligible to vote\n");
        c=18-a;
        printf("you have to wait for %d years \n",c);
    }
}
#include<stdio.h>
int main()
{
    int a,fine,excess;
    printf("enter the speed of the vehicle=\n");
    scanf("%d",&a);
    if(a>=80)
    {
        excess=a-80;
        fine=excess*20;
        printf("over speed fine amount is %d",fine);
    }
    else
    {
        printf("within the speed limit no fine");
    }
}
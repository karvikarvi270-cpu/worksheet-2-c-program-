#include<stdio.h>

int main()
{
    int due_date, payment_date;
    int bill = 100;  
    int fine = 100;
    printf("Enter due date: ");
    scanf("%d",&due_date);
    printf("Enter payment date: ");
    scanf("%d",&payment_date);
    if(payment_date > due_date)
    {
        bill = bill + fine;
        printf("Payment date is late.\n");
        printf("Total bill amount = Rs.%d\n", bill);
    }
    else
    {
        printf("Payment done on time.\n");
        printf("Total bill amount = Rs.%d\n", bill);
    }
}
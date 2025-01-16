#include <stdio.h>
int main()
{
    int id,unit;
    float price,total,tax;
    char name[6];
    printf("Enter your ID: NAME: UNIT: ");
    scanf("%d %s %d",&id,&name,&unit);
    system ("cls");
    if(unit<=199)
    {
       printf("Customer ID no: %d\nCustomer Name: %s\nUnit Consumed: %d",id,name,unit);
       price = unit*1.2;
       printf("\nAmount Charges @tk. 1.5 per unit: %.2f",price);
        if (price<=100)
        {
            tax = 0;
            printf("\nNet Minimum Amount Paid by the Customer: 100\n");
        }
        else
        {   
            tax = 0;
            printf("\nYour bill is: %.2f",price);
            printf("\nSur Charge amount: %.2f",tax);
        
            total = price+tax;
            printf("\nNet Amount Paid by the Customer %.2f\n",total);
        }   
    }
    else if(unit>=200 && unit<=399)
    {
        printf("Customer ID no: %d\nCustomer Name: %s\nUnit Consumed: %d",id,name,unit);
        price = unit*1.5;
        printf("\nAmount Charges @tk. 1.5 per unit: %.2f",price);
        if (price>=400)
        {
            tax = price*0.15;
            printf("\nSur Charge amount @15%%: %.2f",tax);
        }
        else
        {   
            tax = 0;
            printf("\nSur Charge amount: 0");
        }
        total = price+tax;
        printf("\nNet Amount Paid by the Customer %.2f\n",total);
        
    }
    else if(unit>=400 && unit<=599)
    {
        printf("Customer ID no: %d\nCustomer Name: %s\nUnit Consumed: %d",id,name,unit);
        price = unit*1.8;
        printf("\nAmount Charges @tk. 1.8 per unit: %.2f",price);
        if (price>=400)
        {
            tax = price*0.15;
            printf("\nSur Charge amount @15%%: %.2f",tax);
        }
        else
        {
            tax = 0;
            printf("\nSur Charge amount: 0");
        } 
        total = price+tax;
        printf("\nNet Amount Paid by the Customer %.2f\n",total);
    }
    else if(unit>=600)
    {
        printf("Customer ID no: %d\nCustomer Name: %s\nUnit Consumed: %d",id,name,unit);
        price = unit*2;
        printf("\nAmount Charges @tk. 2.00 per unit: %.2f",price);
        if (price>=400)
        {
            tax = price*0.15;
            printf("\nSur Charge amount @15%%: %.2f",tax);
        }
        else
        {
            tax = 0;
            printf("\nSur Charge amount: 0");
        }
        total = price+tax;
        printf("\nNet Amount Paid by the Customer %.2f\n",total);
    }
   
    return 0;
}
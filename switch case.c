#include<stdio.h>
//#include<conio.h>
 long amount=5000,deposit,withdraw;
 int choice,pin,k;
 char transaction='y';
 
 void main()
 {
     system("cls");
     while(pin!=1410)
     {
         printf("Enter Your Pin");
         scanf("%d",&pin);
         
         if(pin!=1410)
         printf("Please Enter Valid Password");
         
         do
         {
             printf("*******welcome from ATM*********");
             printf("1. Check Balance\n");
             printf("2. Withdraw Cash\n");
             printf("3. Deposit Cash\n");
             printf("4. Quit\n");
             
             printf("Enter Your Choice");
             scanf("%d",&choice);
             
             switch(choice)
             {
                 case 1:
                    printf("\n Your Balance in TK:%lu",amount);
                    break;
                 
                 case 2:
                    printf("\n Enter The Amount to Withdraw: ");
                    scanf("%lu",&withdraw);
                    
                    if(withdraw % 100!=0)
                    {
                        printf("\n Please Enter Amount in Multiple Of 100");
                    }
                    else if(withdraw>(amount-5000))
                    {
                        printf("\n INSUFICIENT BALANCE");
                    }
                    else
                    {
                        amount = amount - withdraw;
                        printf("\n\n Please Collect cash");
                        printf("\n Your Current Balance is:%lu",amount);
                    }
                    break;
                 case 3:
                    printf("\n Enter the Amount to Deposit");
                    scanf("%lu",&deposit);
                    amount = amount + deposit;
                    printf("Your Current Balance is:%lu",amount);
                    break;
                    
                 case 4:
                    printf("\n Thanks For Using ATM");
                    break;
                    
                    default:
                    printf("\n INVALID CHOICE");
             } 
             printf("\n\n\n Do You Wish To Have Another Transaction (yes/no):\n");
             fflush(stdin); //to remove garbage value
             scanf("%c",&transaction);
             
             if(transaction =='n' || transaction =='N')
                k=1;
         }
         while(!k);
         printf("\n\n Thanks Again");
         getch();
    
     }
 }
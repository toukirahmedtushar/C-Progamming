#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct user{
    char phone[20];
    char ac[50];
    char password[15];
    float blance;
};

int main(){
    struct user usr;
    FILE *fp;
    int opt,choice;
    
    char filename[50],phone[20],pword[15];
    char cont ='y';
    float deposit,withdraw;
    

    printf("What do you want\n");
    printf("1. Register an account\n");
    printf("2. login an account\n");
    printf("Enter your choice: \n");
    scanf("%d",&opt);

    if(opt== 1){
        system("cls");

        printf("\nEnter your account number\t");
        scanf("%s",usr.ac);
        printf("\nEnter your phone number\t");
        scanf("%s",usr.phone);
        printf("\nEnter your password\t");
        scanf("%s",usr.password);
        usr.blance=0;
        strcpy(filename,usr.phone);
        fp= fopen(strcat(filename,".dat"),"w");
        fwrite(&usr,sizeof(struct user),1,fp);
        if(fwrite!=0){
            printf("Account succesfully registerd.");
        }else{
            printf("Something is rong.");
        }
        fclose(fp);
    }

    if(opt== 2) {
        system("cls");
        printf("\nEnter the phone number: \t");
        scanf("%s", phone);
        printf("Password\t");
        scanf("%s",pword);
        strcpy(filename,phone);
        fp=fopen(strcat(filename,".dat"),"r");

        fread(&usr,sizeof(struct user),1,fp);
        fclose(fp);
        if(!strcmp(pword,usr.password))
        {
            printf("pass match.");
            while(cont=='y'){
                system("cls");
                printf("1.check blance.\n");
                printf("2.deposit.\n");
                printf("3.withdraw.\n");
                printf("4.transfer blance.\n");
                printf("5.change password.\n");
                printf("1.check blance.\n");
                printf("1.check blance.\n");
                printf("\nYour choice.\t");

                scanf("%d",&choice);

                switch(choice){
                    case 1:
                        printf("\nyour blance is tk. %.2f ",usr.blance);
                        break;
                    case 2:
                        printf("\nEnter your Amount.\t");
                        scanf("%f",&deposit);
                        usr.blance += deposit;
                        fp=fopen(filename,"w");
                        fwrite(&usr,sizeof(struct user),1,fp);
                        if(fwrite != NULL)printf("Deposit succesfully %.2f Tk.",deposit);
                        fclose(fp);
                        break;
                    case 3:
                        printf("\nEnter your Amount.\t");
                        scanf("%f",&withdraw);
                        usr.blance -= withdraw;
                        fp=fopen(filename,"w");
                        fwrite(&usr,sizeof(struct user),1,fp);
                        if(fwrite != NULL)printf("withdraw succesfully %.2f Tk.",withdraw);
                        fclose(fp);
                        break;    
                }

                printf("\nDo you continue the transaction(y/n).\t");
                scanf("%s",&cont);
            }

        }
        else{
            printf("Invalid password.");
        }
    }


}
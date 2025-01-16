#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct clubs{
    char club_name[100];
    char leader_name[100];
    int member;
} club;

void addclub() {
    printf("Enter club name\n");
    
    scanf("%s", club.club_name);
    fflush(stdin);
    printf("Enter club leader name\n");
    
    scanf("%s", club.leader_name);
    fflush(stdin);
   
    printf("club member\n");
    scanf("%d", &club.member);
  
}

void showclub(){
printf("%s\n", club.club_name);
printf("%d\n",club.member);

}
int main(){
    addclub();
    showclub();

}
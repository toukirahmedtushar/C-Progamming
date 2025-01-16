#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
}*head=NULL;
void create(int value);
void display();

int main(){
   create(10);  
   display();
    
}
void create(int value){
    
     while(value!= 0){
        Node *new_node;
        new_node =(Node *) malloc(sizeof(Node));
        new_node->data=value;
        if(head==NULL){
            new_node->next=NULL;
            head=new_node;
        }else{
            new_node->next=head;
            head= new_node;
        }
        printf("enter value: ");
        scanf("%d",&value);

     }
}
//--------display----
void display()
{
 if(head == NULL)
 {
    printf("\nList is Empty\n");
 }
 else
 {
    Node *temp = head;
    printf("\n\nList elements are \n");
    while(temp->next != NULL)
    {
        printf("%d --->",temp->data);
        temp = temp->next;
    }
    printf("%d --->NULL",temp->data);
 }
}
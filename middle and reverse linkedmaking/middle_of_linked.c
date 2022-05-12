#include <stdio.h> 
#include <stdlib.h>  
struct Node   //Link list node 
{
    int data;
    struct Node* next;
};

/*void insert(struct Node **head_ref, int new_data)     // function to insert values
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data = new_data;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
} */



int main() {
struct Node *head=NULL,*new_node,*temp,*p1,*p2;

for(int i=0;i<5;i++){
    new_node=malloc(sizeof(struct Node));
    printf("enter the data for node \n");
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
    }
    temp=head;
    while(temp!=NULL){
        printf("data=%d\n",temp->data);
        temp=temp->next;
    }
      p1=p2=head;
      
    while(p1!=NULL&&p1->next!=NULL){
    p1=p1->next->next;
    p2=p2->next;
        
    }
    printf("%d",p2->data);
    return 0;
}
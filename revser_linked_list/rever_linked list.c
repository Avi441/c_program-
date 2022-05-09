#include<stdio.h>
#include<stdlib.h>

struct node {

  int data;
  struct node *link ;
};
typedef  struct node node;
node *head,*temp,*tail,*prev,*next,*current ;

int main(){
    int arr[5]={2,3,4,5,6,7};
head =malloc(sizeof(node));
tail=head;
head->data=arr[0];

for(int i =1; i<5;i++){
    temp=malloc(sizeof(node));
    tail->link=temp;
    tail=temp;
    tail->data=arr[i];
    
}
temp=head;
while(temp!=NULL){
    printf("%d\n",temp->data);
    
    temp=temp->link;
}
prev=NULL;
current =head;
while(current!=NULL){
next=current->link;
current->link=prev;
prev=current;

current =next;
}
head=prev;
temp=head;
while(temp!=NULL){
    printf("%d\n",temp->data);
    
    temp=temp->link;
}




return 0;
}
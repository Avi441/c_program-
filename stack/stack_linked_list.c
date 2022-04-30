#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;

};
void cr_lit();
void pop();
void show();
void push();
typedef struct node nt;
nt *head,*tail,*temp;
int top=-1;
int n;

int main(){
    int input;


//cr_lit();

        while(1){
    
    
    printf("\n1.pop\n2.push\n3.show\n4.exit\n");
    scanf("%d",&input);

switch(input){

    case 1:
     pop();
     break;
     case 2:
     push();
     break;
     case 3:
     show();
     break;
     case 4:
     exit(0);
     default:
     printf("enter wrong vlaue");




}}
            return 0;
        }
/*void cr_lit(){

printf("enter the size of stak\n");
scanf("%d",&n);
temp=malloc(sizeof(nt));
head=temp;
scanf("%d",&head->data);
head->link=NULL;
n--;
for(int i=1;i<n;i++){
    temp=malloc(sizeof(nt));
    temp->data=0;
    temp->link=NULL;
    tail->link=temp;
    tail=temp;
}
}*/
void push(){
    int d;

  temp =malloc(sizeof(nt));  
  printf("enter the data");
    scanf("%d",&temp->data);
if(head==NULL){
temp->data=d;
temp->link=NULL;
head=temp;
}
else{
    temp->data=d;
    temp->link=head;
    head=temp;


}

}

void show (){
temp=head;
  while(temp!=NULL){
      printf("stack  %d \n",temp->data);
          temp=temp->link;
    }

}
void pop(){
    int d;
   if(head==NULL)
   printf("Underflow");
   else
   {
       temp=head;
       head=head->link;
       free(temp);
       printf("item popped");
   }


}
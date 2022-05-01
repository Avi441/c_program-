#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
struct node * link;

    /* data */
};
void enqu();
void dequ();
void show();

typedef struct node node;
node *front ,*rear,*temp;
int main(){

 int ch;
while(1){
   

    printf("ENter you choices \n");
    printf("\n1.enqu\n2.dequ\n3.show\n4.exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
         enqu();
        break;
        case 2:
        dequ();
        break;
        case 3:
        show();
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("you enter wrong valu \n");

    }

}




    return 0;
}
void enqu(){

temp=malloc(sizeof(node));
printf("enter the data for enqueue\n");
scanf("%d",&temp->data);
if (front==NULL){
    front=temp;
    rear=temp;
    rear->link=NULL;

}
else{

rear->link=temp;
rear= temp;



}
}

void show (){
temp=front;

if(front==NULL){
    printf("UNDER FLOW" );
}

else{
    while(temp!=NULL){
        printf("datat in sid queue%d\n",temp->data);
        temp=temp->link;
    }
}


}
void dequ(){
     if(front==NULL){
         printf("under flow");

     }
     else{
      temp=front;
      front=front->link;
      printf("dequeue data==%d\n",temp->data);

      free(temp);   
     }


}

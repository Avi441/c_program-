#include<stdio.h>
#include<stdlib.h>
#define size 10
int front =-1,rear=-1;
int queue[size];
void enqu();
void dequ();
void show();
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
if (rear==size-1){
    printf("overflow\n");

}
else{
    if (front==-1&&rear==-1){
        front=rear=0;
    }
    else{
        rear++;
    }
}
printf("enter data for enquue:\n");
scanf("%d",&queue[rear]); 

}

void dequ(){

if(front==-1||front>rear){
printf("under flow\n");
}
else{
    if(front==rear){
        front=rear=0;
    }
    else{
        printf("%d",queue[front]);
        front++;
        }

    }
}
void show(){

    if (rear==-1){
        printf("udner flow\n");

    }
    else{
        printf("data of queue\n");
        for(int i=front;i<=rear;i++){
            printf("data=%d\n",queue[i]);
        }
    }
}
#include<stdio.h>
#include<stdlib.h>
//int main()
int top =-1;
int stack[6];
void push();
void pop();
void show();


int main(){
int  choice ;
while(1){

printf("operation performed by stack");
printf("\n 1.push element\n2.pop the element \n3.show \n4.End");
printf("\n Enter the choice");
scanf("%d",&choice);
switch(choice){ 
case 1:push();
break;
case 2:pop();
break;
case 3:show();
break; 
case 4:
 exit(0);
default:
printf("enter value is wrong \n");

}}
return 0;
}

void push(){
    int x;
    if(top ==6-1){
        printf("stack over flow");
    }
    else{
        printf("\nENter element to be inseted to the stack");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}
void pop(){

if (top==-1)
    printf("\n under flow");
else{
    printf("\n popped element : %d",stack[top]);
    top=top-1;
}

}
void show()
{
     
     
    if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for(int i=top;i>=0;--i)
            printf("%d\n",stack[i]);
    }
}




    

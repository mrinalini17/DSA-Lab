/*Write a menu driven program to perform the following operations of a
stack using array by using suitable user defined functions for each case. 
a) Check if the stack is empty
b) Display the contents of stack
c) Push
d) Pop*/
#include<stdio.h>
#include<stdlib.h>
int n;
int top=-1,item,choice;

void push(int b,int stack[]){
    if(top==(n-1)){
        printf("Overflow condition");
    }
    else{
        top=top+1;
        stack[top]=b;
        printf("%d pushed to stack successfully \n",b);
    }
}

void pop(int stack[]){
    if(top==-1){
        printf("Underflow condition\n");
        return;
    }
    else{
        printf("%d popped from stack\n",stack[top]);
        top=top-1;
    }
}

void isEmpty(){
    if(top==-1)
        printf("Stack is Empty.\n");
    else
        printf("Stack is not Empty.\n");
}

void show(int stack[]){
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    printf("Enter the Maxsize of the stack: ");
    scanf("%d",&n);
    int stack[n];
    printf("Press 1 to Push\n");
    printf("Press 2 to Pop\n");
    printf("Press 3 to check if stack is empty\n");
    printf("Press 4 to display the stack\n");
    printf("Press 5 to exit\n");
    
    while(choice!=4){
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                printf("Enter item to be inserted: ");
                scanf("%d",&item);
                push(item,stack);
            }break;
            case 2:
            {
                pop(stack);
            }break;
            case 3:
            {
                isEmpty();
            }break;
            case 4:
            {
                show(stack);
            }break;
            case 5:
            {
                printf("Exiting.....");
                return 0;
            }break;
            default:
            {
                printf("Invalid Input");
            }
        }
        printf("Enter your choice again: ");
    }
    return 0;
}

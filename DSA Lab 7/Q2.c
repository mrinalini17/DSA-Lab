#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
};
struct node *top=NULL;
void push(int item){
    if(top==NULL){
        struct node *ptr;
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=item;
        ptr->next=NULL;
        top=ptr;
    }
    else{
        struct node *ptr;
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=item;
        ptr->next=top;
        top=ptr;

    }
}
void pop(){
    struct node *y;
    y=top;
    if(top==NULL){
        printf("Underflow");
    }
    else {
      y=top;
      top=y->next;
      free(y);
    }
}
void display(){
    struct node *y;
    y=top;
while(y!=NULL){
    printf("%d  ",y->data);
    y=y->next;
}
}
void check(){
    if(top==NULL){
        printf("Stack is empty ");
    }
}
int main(){
    struct node *y,*x;
    int choice,item;
    do{
        printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display all stack elements\n");
                printf("4. Check whether stack is empty or not ");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice){
                    case 1:
                    printf("ENter the item to be pushed ");
                    scanf("%d",&item);
                    push(item);
                    break;
                    case 2:
                    pop();
                    break;
                    case 3:
                    display();
                    break;
                    case 4:
                    check();
                    case 5:
                    break;
                    default :
                    printf("The number you have entered is wrong ");


                }
    }
    while(choice<6);
}
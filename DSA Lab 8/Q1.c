/*1. Write a menu driven program to implement queue operations such as Enqueue, Dequeue, 
Peek, Display of elements, IsEmpty, IsFull using static array.*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int queue_arr[MAX];
int rear=-1;
int front=-1;

void enqueue(int item){
        if( isFull() ){
            printf("Queue Overflow\n");
                return;
        }
        if( front == -1 )
                front=0;
        rear=rear+1;
        queue_arr[rear]=item ;
}

int dequeue(){
        int item;
        if( isEmpty() ){
            printf("Queue Underflow\n");
            exit(1);
        }
        item=queue_arr[front];
        front=front+1;
        return item;
}

int peek(){
    if( isEmpty() ){
        printf("Queue Underflow\n");
            exit(1);
        }
        return queue_arr[front];
}

int isEmpty(){
    if( front==-1 || front==rear+1 )
        return 1;
    else
        return 0;
}

int isFull(){
    if( rear==MAX-1 )
        return 1;
    else
        return 0;
}

void display(){
    int i;
    if ( isEmpty() ){
        printf("Queue is empty\n");
            return;
        }
        printf("Queue is :\n");
        for(i=front;i<=rear;i++)
                printf("%d  ",queue_arr[i]);
        printf("\n");
}

int main(){
    int choice,item;
    while(1){
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display element at the front\n");
        printf("4.Display all elements of the queue\n");
        printf("5.Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\nInput the element for adding in queue : ");
                scanf("%d",&item);
                enqueue(item);
                break;
            case 2:
                item=dequeue();
                printf("\nDeleted element is  %d\n",item);
                break;
            case 3:
                printf("\nElement at the front is %d\n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("\nWrong choice\n");
            }
        }
        return 0;
}


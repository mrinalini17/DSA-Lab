//WAP to reverse the sequence elements in a double linked list.
#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *prev;
struct node *next;
};
void reverse(struct node*head){
    struct node *y;
    y=head;
    while(y!=NULL){
        printf("%d-->",y->data);
        y=y->prev;
    }
printf("NULL");
}
void traverse(struct node *head){
    struct node *y;
    y=head;
    while(y!=NULL){
        printf("%d-->",y->data);
        y=y->next;
    }
    printf("NULL");
}
int main(){
    struct node *y,*x,*p;
    int n,i;
    printf("Enter the no. of nodes: ");
    scanf("%d",&n);
    x=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value of node 1: ");
    scanf("%d",&x->data);
    y=x;
    y->prev=NULL;
    for(i=2;i<=n;i++){
        printf("Enter the value of node %d: ",i);
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        y->next=p;
        p->prev=y;
        y=p;
    }
    y->next=NULL;
    reverse(y);

}
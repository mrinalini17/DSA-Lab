#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};
int main(){
    struct node *a,*b,*p,*c;
    int i,n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    a=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of node 1: ");
    scanf("%d",&a->data);
    b=a;
    for(i=2;i<=n;i++){
        p=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node %d: ",i);
        scanf("%d",&p->data);
        b->link=p;
        b=p;}
        b->link=NULL;
        b=a;
        while(b!=NULL){
            printf("%d--->",b->data);
            b=b->link;}
            printf("NULL");
            c=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the data of new node: ");
            scanf("%d",&c->data);
            p->link=c;
            p=c;
            c->link=NULL;
            b=a;
            while(b!=NULL){
                printf("%d--->",b->data);
                b=b->link;}
                printf("NULL\n");
                return 0;
    
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void traverse(struct node *b)
{
    while(b!=NULL){
        printf("%d--->",b->data);
        b=b->link;}
        printf("NULL\n\n");
}
void insert_at_beg(struct node *a,struct node *c)
{
    struct node *b;
    c=(struct node *)malloc(sizeof(struct node)); 
    printf("Enter data of new node : ");
    scanf("%d",&c->data);
    c->link=a;
    a=c;
    b=a;
    while(b!=NULL){
        printf("%d--->",b->data);
        b=b->link;} 
        printf("NULL\n\n");
}
void insert_at_end(struct node *a,struct node *c, struct node *p)
{
    struct node *b;
    c=(struct node *)malloc(sizeof(struct node)); 
    printf("Enter data of new node : ");
    scanf("%d",&c->data);
    p->link=c;
    p=c;
    c->link=NULL;
    b=a;
    while(b!=NULL){
        printf("%d--->",b->data);
        b=b->link;}
        printf("NULL\n\n");
}
void total_nodes(struct node *a)
{
    struct node *b=a;
    int c=0;
    while(b!=NULL){
        c+=1;
        b=b->link;}
        printf("Total number of nodes = %d\n\n",c);
}
int main()
{
    struct node *a,*b,*c,*p;
    int i,n;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    a=(struct node *)malloc(sizeof(struct node *));
    b=a;
    printf("Enter data of node 1 : ");
    scanf("%d",&a->data);
    for(i=2;i<=n;i++){
        p=(struct node *)malloc(sizeof(struct node *));
        printf("Enter the data of node %d : ",i);
        scanf("%d",&p->data);
        b->link=p;
        b=p;}
        b->link=NULL;
        b=a;
        for(i;i<i+1;i++){
            printf("Which of the following operations would you like to perform :-\n");
            printf("1.Traverse\n");
            printf("2.Insert at beginning\n");
            printf("3.Insert at end\n");
            printf("4.Count total number of nodes\n");
            printf("Enter the number listed alongside the operation to perform it : ");
            int d;
            scanf("%d",&d);
            if(d==1)
            traverse(b);
            else if(d==2)
            insert_at_beg(a,c);
            else if(d==3)
            insert_at_end(a,c,p);
            else if(d==4)
            total_nodes(a);
            else{
                printf("Operation not valid");
                break;}}
                return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct node{
int row,col,element;
struct node *next;
};
void create(struct node *head,int nonzero){
    struct node *y,*p;
    y=head;
    for(int i=0;i<nonzero;i++){
        printf("Enter the row column and element ");
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d%d%d",&p->row,&p->col,&p->element);
        y->next=p;
        y=p;
    }
    y->next=NULL;
}
void display(struct node *head,int row,int column){
    struct node *y;
    int i,j;
    y=head;
    for( i=0;i<row;i++){
        for(j=0;j<column;j++){
            if((i==y->row)&&(j==y->col)){
                printf("%d\t",y->element);
                y=y->next;
            }
            else {
                printf("0\t");
            
            }
        }
        printf("\n");
    }
}
int main(){
    struct node *x,*y;
    x=(struct node *)malloc(sizeof(struct node));
    int row,column,nonzero;
    printf("Enter the number of rows and columns ");
    scanf("%d%d",&row,&column);
    printf("Enter the number of non zero elements ");
    scanf("%d",&nonzero);
    printf("Enter the row and column and element of first node ");
    scanf("%d%d%d",&x->row,&x->col,&x->element);
    y=x;
    create(y,nonzero);
    display(y,row,column);
}
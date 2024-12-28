/*WAP to create a linked list that represents a polynomial expression
with single variable (i.e. 5x7-3x5+x2+9) and display the polynomial by
using user defined functions for creation and display.*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int exp;
    struct node *link;
};
void create(struct node *a,int n){
    struct node *b=a,*c,*p;
    for(int i=2;i<=n;i++)
    {p=(struct node *)malloc(sizeof(struct node));
    printf("Enter coefficient of term %d : ",i);
    scanf("%d",&p->coef);
    printf("Enter exponent of term %d : ",i);
    scanf("%d",&p->exp);
    b->link=p;
    b=p;}
    b->link=NULL;
}
void display(struct node *a){
    struct node *b=a;
    while(b!=NULL)
    {if(b->coef>=0)
    printf("+%dx%d",b->coef,b->exp);
    else 
    printf("%dx%d",b->coef,b->exp);
    b=b->link;}
}
int main(){
    struct node *a,*b,*p;
    int i,n;
    printf("Enter number of terms in polynomial : ");
    scanf("%d",&n);
    a=(struct node *)malloc(sizeof(struct node));
    printf("Enter coefficient of term 1: ");
    scanf("%d",&a->coef);
    printf("Enter exponent of term 1 : ");
    scanf("%d",&a->exp);
    create(a,n);
    display(a);
    return 0;
}
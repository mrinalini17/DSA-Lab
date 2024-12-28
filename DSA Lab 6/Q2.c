/*WAP by modifying the Lab Exercise 1 (LE1) program to add two
polynomials with single variable. Use the same function in (LE1)
written for creation & display operations and write a new function for
addition operations.*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coef;
    int exp;
    struct node *link;
};
void create(struct node *a,int n)
{
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
void display(struct node *a)
{
    struct node *b=a,*p;
    while(b!=NULL)
    {if(b->coef>=0)
    printf("+%dx%d",b->coef,b->exp);
    else 
    printf("%dx%d",b->coef,b->exp);
    b=b->link;}
    printf("\n");
}
void add(struct node *a,struct node *c)
{
    struct node *b=a,*d=c;
    while(b!=NULL&&d!=NULL)
    {if(b->exp==d->exp)
    {if(b->coef+d->coef>=0)
    {printf("+%dx%d",b->coef+d->coef,b->exp);}
    else
    {printf("%dx%d",b->coef+d->coef,b->exp);}}
    else
    {if(b->coef>=0&&d->coef>=0)
    {printf("+%dx%d",b->coef,b->exp);
    printf("+%dx%d",d->coef,d->exp);}

    else if(b->coef>=0&&d->coef<0)
    {printf("+%dx%d",b->coef,b->exp);
    printf("%dx%d",d->coef,d->exp);}

    else if(b->coef<0&&d->coef>=0)
    {printf("%dx%d",b->coef,b->exp);
    printf("+%dx%d",d->coef,d->exp);}

    else if(b->coef<0&&d->coef<0)
    {printf("%dx%d",b->coef,b->exp);
    printf("%dx%d",d->coef,d->exp);}}
    d=d->link;
    b=b->link;}
}
int main()
{
    struct node *a,*b,*p,*c,*d,*e;
    int i,n,m;
    printf("Enter number of terms in polynomial : ");
    scanf("%d",&n);
    a=(struct node *)malloc(sizeof(struct node));
    printf("Enter coefficient of term 1: ");
    scanf("%d",&a->coef);
    printf("Enter exponent of term 1 : ");
    scanf("%d",&a->exp);
    create(a,n);
    printf("Enter number of terms in polynomial : ");
    scanf("%d",&m);
    c=(struct node *)malloc(sizeof(struct node));
    printf("Enter coefficient of term 1: ");
    scanf("%d",&c->coef);
    printf("Enter exponent of term 1 : ");
    scanf("%d",&c->exp);
    create(c,m);
    display(a);
    display(c);
    printf("----------------------------------\n");
    add(a,c);
    return 0;
}
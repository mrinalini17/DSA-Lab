/*WAP to create a double linked list of n nodes and display the linked list by using suitable 
user defined functions for create and display operations.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *rightlink;
    struct node *leftlink;
};
void create(struct node *a, int n)
{
    struct node *b = a, *p;
    for (int i = 2; i <= n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        printf("Enter data of node %d : ", i);
        scanf("%d", &p->data);
        b->rightlink = p;
        b = p;
    }
    b->rightlink = NULL;
}
void traverse(struct node *a)
{
    struct node *b = a;
    while (b->rightlink!= NULL)
    {
        printf("%d-->", b->data);
        b = b->rightlink;
    }
    printf("%d-->", b->data);
    printf("NULL\n");
}
int main()
{
    struct node *a;
    int n, i;
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    a = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of node 1 : ");
    scanf("%d", &a->data);
    create(a, n);
    traverse(a);
    return 0;
}
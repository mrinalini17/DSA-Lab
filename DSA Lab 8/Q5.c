/*5. A stack data structure is given with push and pop operations. WAP to implement a
queue using instances of stack data structure and operations on them.*/
#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int stack1[maxsize];
int stack2[maxsize];
int top1=-1;
int top2=-1;
void enqueue()
{
    if(top1==maxsize-1)
    {printf("Overflow");
    exit(0);}
    else
    {int item;
    printf("Enter data : ");
    scanf("%d",&item);
    top1++;
    top2++;
    stack1[top1]=item;}
}
void dequeue()
{
    if(top1==-1)
    {printf("Underflow");
    exit(0);}
    else
    {if(top1==0)
    {top1=-1;
    top2=-1;}
    else
    {for(int i=0;i<=top1;i++)
    stack2[i]=stack1[top1-i];
    top2--;
    top1--;
    for(int i=0;i<=top2;i++)
    stack1[i]=stack2[top2-i];
    }}
}
void display()
{
    for(int i=top1;i>=0;i--)
    printf("%d\n",stack1[i]);
}
int main()
{
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display\n");
    int x;
    for(int i;i<i+1;i++)
    {printf("Enter choice : ");
    scanf("%d",&x);
    switch(x)
    {
        case(1):enqueue();
                break;
        case(2):dequeue();
                break;
        case(3):display();
                break;
        default:exit(0);
    }}
    return 0;
}
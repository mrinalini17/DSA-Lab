#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node *Getnode();
void main(){
    struct node *root;
    root=Getnode();
}
struct node *Getnode(){
    struct node *temp;
    int data,choice;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Press 0 to exit");
    printf("\nPress 1 for new node");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    if(choice==0){
        return 0;
    }
    else{
        printf("Enter the data:");
        scanf("%d", &data);
        temp->data = data;
        printf("\nEnter the left child of %d", data);
        temp->left =Getnode() ;
        printf("\nEnter the right child of %d", data);
        temp->right = Getnode() ;
        return temp;
    }
}
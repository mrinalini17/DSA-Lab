#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

node *root=NULL;

void create();
void inorder();
void preorder();
void postorder();
void search();
void smallest();
void largest();
void delete();

int main(){
    int ch;
    while(1){
        printf("\n ----------------------------------------------\n");
        printf(" Binary Search Tree Menu \n");
        printf(" ----------------------------------------------\n");
        printf(" 0. Quit\n");
        printf(" 1. Create\n");
        printf(" 2. In-Order Traversal\n");
        printf(" 3. Pre-Order Traversal\n");
        printf(" 4. Post-Order Traversal\n");
        printf(" 5. Search\n");
        printf(" 6. Find Smallest Element\n");
        printf(" 7. Find Largest Element\n");
        printf(" 8. Delete Tree\n");
        printf(" ----------------------------------------------\n");
        printf(" Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
        case 0:
            exit(0);
            break;

        case 1:
            create();
            break;

        case 2:
            inorder();
            break;

        case 3:
            preorder();
            break;

        case 4:
            postorder();
            break;

        case 5:
            search();
            break;

        case 6:
            smallest();
            break;

        case 7:
            largest();
            break;

        case 8:
            delete();
            break;

        default:
            printf("\nInvalid Choice!!\n");
            break;
        }
    }
}

void create(){
    node *newnode,*ptr;
    int item;
    printf("\nEnter the data:");
    scanf("%d",&item);
    newnode=(node *)malloc(sizeof(node));
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;

    if(root==NULL){
        root=newnode;
        printf("\nRoot Node is Created");
    }
    else{
        ptr=root;

        while(ptr!=NULL){
            if(item<ptr->data){
                if(ptr->left==NULL){
                    ptr->left=newnode;
                    printf("\nNode is inserted to the left of %d",ptr->data);
                    break;
                }
                else
                    ptr=ptr->left;
            }
            else if(item>ptr->data){
                if(ptr->right==NULL){
                    ptr->right=newnode;
                    printf("\nNode is inserted to the right of %d",ptr->data);
                    break;
                }
                else
                    ptr=ptr->right;
            }
            else{
                printf("\nDuplicate elements are not allowed");
                break;
            }
        }
    }
}

void inorder(node *ptr){
    if(ptr!=NULL){
        inorder(ptr->left);
        printf("\t%d",ptr->data);
        inorder(ptr->right);
    }
}

void preorder(node *ptr){
    if(ptr!=NULL){
        printf("\t%d",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder(node *ptr){
    if(ptr!=NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        printf("\t%d",ptr->data);
    }
}

void search(){
    node *ptr;
    int item,flag=0;
    ptr=root;
    printf("\nEnter the data to be searched: ");
    scanf("%d",&item);
    while(ptr!=NULL){
        if(item==ptr->data){
            flag=1;
            break;
        }
        else if(item<ptr->data)
            ptr=ptr->left;
        else
            ptr=ptr->right;
    }
    if(flag==1)
        printf("\nElement is found in the tree");
    else
        printf("\nElement is not found in the tree");
}

void smallest(){
    node *ptr;
    ptr=root;
    if(root==NULL){
        printf("\nTree is Empty");
    }
    else{
        while(ptr->left!=NULL)
        ptr=ptr->left;
        printf("\nSmallest Element in the tree is: %d",ptr->data);
    }
}

void largest(){
    node *ptr;
    ptr=root;
    if(root==NULL){
        printf("\nTree is Empty");
    }
    else{
        while(ptr->right!=NULL)
        ptr=ptr->right;
        printf("\nLargest Element in the tree is: %d",ptr->data);
    }
}

void delete(){
    node *ptr;
    ptr=root;
    if(root==NULL){
        printf("\nTree is Empty");
    }
    else{
        root=NULL;
        printf("\nTree is deleted");
    }
}
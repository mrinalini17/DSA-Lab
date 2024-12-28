#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int data;
    struct node *link;
};
void traverse(struct node *k){
    struct node *p;
    p=k;
    while(p->link!=k){
        printf("%d\n",p->data);
        p=p->link;
    }
    printf("%d\n",p->data);

}
void empty(struct node *k){
    if(k==NULL){
     printf("Linked list is empty\n");
    }
}
void insert_pos(struct node *k){
    struct node *s,*j,*y;
    s=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of the node:");
    scanf("%d",&s->data);
    int loc,count=1;
    printf("Enter location:");
    scanf("%d",&loc);
    
    y=k;
    while(count<loc&&y->link!=k){
        j=y;
        y=y->link;
        count++;
    }
    if(count>loc){
        printf("Position not found\n");
      }
      else if(y->link=k){
        y->link=s;
        s->link=k;
        y=k;
        while(y->link!=k){
         printf("%d\n",y->data);
         y=y->link;
        }
        printf("%d\n",y->data);        

        
      }
      else if(loc==1){
        s->link=k;
        while(y->link!=k){
            y=y->link;
        }
        y->link=s;
        y=s;
        while(y->link!=s){
            printf("%d\n",y->data);
            y=y->link;
        }
        printf("%d\n",y->data);
      }
    else{
        j->link=s;
        s->link=y;
        y=k;
        while(y->link!=k){
            printf("%d\n",y->data);
            y=y->link;
        }
        printf("%d\n",y->data);        

    }
    
}
void delete_loc(struct node *k){
     struct node *j,*y,*p;
    
    int loc,count=1;
    printf("Enter location:");
    scanf("%d",&loc);
    y=k;
    while(count<loc&&y->link!=k){
        j=y;
        y=y->link;
        count++;
    }

if(k==NULL){
    printf("Linked list is empty\n");
    
}
else if(loc==1){
    k=k->link;

}
else{
    j->link=y->link;
}
y=k;
while(y->link!=k){
        printf("%d\n",y->data);
        y=y->link;
    }
    printf("%d\n",y->data);


}
void givenkey(struct node *k){
    int key;
    struct node *j,*y,*p;
    printf("Enter key:");
    scanf("%d",&key);
    if(k==NULL){
        printf("Linked list is empty\n");
    }
    else if(k->data==key){
        k=k->link;
        y=k;
        while(y->link!=k){
        printf("%d\n",y->data);
        y=y->link;
    }
    printf("%d\n",y->data);
}
else{
    y=k;
    p=k;
    while(y->data!=key&&y->link!=k){
        p=y;
        y=y->link;
    }
    p->link=y->link;
}
y=k;
while(y->link!=k){
        printf("%d\n",y->data);
        y=y->link;
    }
    printf("%d\n",y->data);

}
void countnode(struct node *k){
    int count=1;
    struct node *y;
    y=k;
    while(y->link!=k){

        count++;
        y=y->link;
    }
    printf("Total node is:%d\n",count);

}
void search(struct node *k ){
    struct node *y,*s;
    y=k;
    int item,count=0;
    printf("Enter the element of searching:");
    scanf("%d",&item);
    while(y->link!=k){
        y=y->link;
    }
    s=y;
    y=k;
    while(y->link!=k){
        if(y->data==item){
            printf("Element found\n");
            count=1;
        }
        y=y->link;
    }
    if(count==0){
        printf("element not found\n");
    }
    
    }

int main(){
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    struct node *x,*y,*p;
    x=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of node 1:");
    scanf("%d",&x->data);
    y=x;
    for(int i=1;i<n;i++){
        p=(struct node *)malloc(sizeof(struct node));
        printf("Enter data of node %d:",i+1);
        scanf("%d",&p->data);
        y->link=p;
        y=p;
    }
    y->link=x;
    y=x;
    int choice;
    printf("press 1 to traverse:\n");
    printf("Press 2 to check linked list is empty or not\n");
    printf("Enter 3 to insert at specific location:\n");
    printf("press 4 to delete specific location:\n");
    printf("Press 5 to delete a given key:\n");
    printf("Press 6 to count node\n");
    printf("Press 7 to search an element\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        traverse(y);
        break;
        case 2:
        empty(y);
        break;
        case 3:
        insert_pos(y);
        break;
        case 4:
        delete_loc(y);
        break;
        case 5:
        givenkey(y);
        break;
        case 6:
        countnode(y);
        break;
        case 7:
        search(y);
        break;
    }
    return 0;
}
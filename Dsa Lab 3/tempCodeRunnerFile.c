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
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *leftChild, *rightChild;
};

struct node *Getnode()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    int data;
    printf("Enter the data (Press 0 to terminate) :");
    scanf("%d", &data);

    if (data == 0)
    {
        return 0;
    }
    else
    {
        newNode->data = data;
        printf("For Left Child of %d,\n", data);
        newNode->leftChild = Getnode();
        printf("For Right Child of %d,\n", data);
        newNode->rightChild = Getnode();
        return newNode;
    }
}

void traverse_in_order(struct node *currentNode)
{
    if (currentNode == NULL)
    {
        return;
    }
    else
    {
        traverse_in_order(currentNode->leftChild);
        printf("%d ", currentNode->data);
        traverse_in_order(currentNode->rightChild);
    }
}

void traverse_pre_order(struct node *currentNode)
{
    if (currentNode == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", currentNode->data);
        traverse_pre_order(currentNode->leftChild);
        traverse_pre_order(currentNode->rightChild);
    }
}

void traverse_post_order(struct node *currentNode)
{
    if (currentNode == NULL)
    {
        return;
    }
    else
    {
        traverse_post_order(currentNode->leftChild);
        traverse_post_order(currentNode->rightChild);
        printf("%d ", currentNode->data);
    }
}

void count_leaf(struct node *currentNode, int *count)
{
    if (currentNode->leftChild == NULL && currentNode->rightChild == NULL)
    {
        (*count)++;
        return;
    }
    else
    {
        count_leaf(currentNode->leftChild, count);
        count_leaf(currentNode->rightChild, count);
    }
}

void count_non_leaf(struct node *currentNode, int *count)
{
    if (currentNode->leftChild == NULL && currentNode->rightChild == NULL)
    {
        return;
    }
    else
    {
        (*count)++;
        count_non_leaf(currentNode->leftChild, count);
        count_non_leaf(currentNode->rightChild, count);
    }
}

void sum_of_nodes(struct node *currentNode, int *count)
{
    if (currentNode== NULL)
    {
        return;
    }
    else
    {

        (*count) = (*count) + currentNode->data;
        sum_of_nodes(currentNode->leftChild, count);
        sum_of_nodes(currentNode->rightChild, count);
    }
}

int main()
{
    int userChoice = 1;
    struct node *root;
    int sum, countNonLeaf, countLeaf;

    printf("Choose from :- \n0. Quit. \n1. Create a Binary Tree. \n2. In-Order Traversal. \n3. Pre-Order Traversal. \n4. Post-Order traversal. \n5. To count number of leaf nodes in the tree. \n6. To count number of non-leaf nodes in the tree. \n7. To find sum of all nodes of the tree. \n");

    while (userChoice != 0)
    {
        printf("\n\nEnter your choice: \n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 0:
            break;
        case 1:
            root = Getnode();
            break;
        case 2:
            traverse_in_order(root);
            printf("\n");
            break;
        case 3:
            traverse_pre_order(root);
            printf("\n");
            break;
        case 4:
            traverse_post_order(root);
            printf("\n");
            break;
        case 5:
            countLeaf = 0;
            count_leaf(root, &countLeaf);
            printf("No of Leaf Nodes: %d\n", countLeaf);
            break;
        case 6:
            countNonLeaf = 0;
            count_non_leaf(root, &countNonLeaf);
            printf("No of Non-Leaf Nodes: %d\n", countNonLeaf);
            break;
        case 7:
            sum = 0;
            sum_of_nodes(root, &sum);
            printf("Sum of all the nodes: %d\n", sum);
            break;
        }
        printf("----------------------------------");
    }
    return 0;
}

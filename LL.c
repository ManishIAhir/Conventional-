#include<stdio.h>
#include<stdlib.h>
typedef struct node Node_t;

struct node
{
    int data;
    struct node *next;
};

Node_t *head;
Node_t* create_node(int value);
void add_First(int iValue);

Node_t* create_node(int value);
{
    Node_t *new_node= NULL;
    new_node= (Node_t*)malloc(1*sizeof(Node_t));
    if(new_node==NULL)
    {
        printf("\nunable to allocate memory");
        exit(0);
    }
    else
    {
        new_node->data=value;
        new_node->next=NULL;
    }
}
int main()
{

    return 0;
}
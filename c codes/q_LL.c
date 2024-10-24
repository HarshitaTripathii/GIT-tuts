#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};
struct node *front=NULL;
struct node *rear=NULL;
void enque(int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Overflow\n");
        return;
    }
    else{
        ptr->data=data;
        if(front==NULL)
        {
            front=ptr;
            rear=ptr;
            front->link=NULL;
        }

        rear->link=ptr;
        rear=ptr;
        rear->link=NULL;
    }
}

void deque()
{
    if(front == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        struct node * ptr=(struct node*)malloc(sizeof(struct node));
        ptr=front;
        front=front->link;
        free(ptr);
        ptr=NULL;
}
}
void print()
{
    if(front==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        struct node * ptr=NULL;
        ptr=front;
        while(ptr!=NULL)
        {
            printf("%d\n", ptr->data);
            ptr=ptr->link;
        }

    }
}


void main(){
    enque(12);
    enque(24);
    enque(36);
        deque();

    enque(48);
    print();
//     printf("%d", front->data);
//     printf("%d", rear->data);
}
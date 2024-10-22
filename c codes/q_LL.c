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
void main(){
    enque(12);
    enque(24);
    enque(36);
    enque(48);
    printf("%d", front->data);
    printf("%d", rear->data);
}
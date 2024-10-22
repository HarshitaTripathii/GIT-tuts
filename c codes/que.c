#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int b=-1,f=-1;
int que_array[MAX];
int isEmpty()
{
    if (b==f){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(int n){
    if(b==n-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enque(int n,int a[],int data){
    if(isFull(n)){
        printf("Queue is Full\n");
        return;
    }
    else{
        b=b+1;
        a[b]=data;
}
}
void deque(){
    if(isEmpty()){
        printf("Queue is Empty\n");
        exit(1);
        }
    else{
        f=f+1;
    }
}

void print(int n,int a[])
{
    if(isEmpty()){
        printf("Queue is Empty\n");
        exit(1);
    }
    else{

    
    printf("queue elements are \n");
    for(int i=f+1;i<n;i++ ){
        
        printf("%d\n", a[i]);
    }
    }
}


void main(){
    int e,n,ch;
    printf("1 : insertion\n 2: deletion \n 3 : display\n");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
        printf("enter size of queue\n");
        scanf("%d", &n);ḷ̥
        for(int i=0;i<n;i++)
        {
            printf("enter element : \n");
            scanf("%d", &e);
            enque(n, que_array,e);
        }
        break;

        case 2:
        deque();
        break;

        case 3:
        print(n,que_array);
        break;

        default:
        printf("enter valid choice, 1 , 2 , 3 :")
        break;
    

    }
    
    

    


}
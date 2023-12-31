#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
        printf("Queue is Full.\n");
    else{
        temp->data=x;
        temp->next=NULL;
        if(front==NULL)
            front=rear=temp;
        else{
            rear->next=temp;
            rear=temp;
        }
    }
}

int dequeue(){
    int x=-1;
    struct Node *temp;
    if(front==NULL)
        printf("Queue is empty.\n");
    else{
        x=front->data;
        temp=front;
        front=front->next;
        free(temp);
    }
    return x;
}

void Display(){
    struct Node *ptr=front;
    while(ptr){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    Display();
    printf("%d \n",dequeue());
    enqueue(50);
    enqueue(70);
    Display();
    
    return 0;
}
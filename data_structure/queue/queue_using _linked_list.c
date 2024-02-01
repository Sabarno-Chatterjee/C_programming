//queue using linked list 
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int info){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
        printf("Queue is full\n");
    else{
        temp->data=info;
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
        printf("Queue is empty\n");
    else{
        temp=front;
        front=front->next;
        x=temp->data;
        free(temp);
    }
    return x;
}

void display(struct Node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    display(front);
    printf("%d \n",dequeue());
    enqueue(50);
    enqueue(70);
    printf("%d \n",dequeue());
    display(front);
    return 0;
}
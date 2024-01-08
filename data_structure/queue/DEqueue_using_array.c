//DEqueue(double ended queue using array)

#include<stdio.h>
#include<stdlib.h>

strcut Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void insert_rear(struct Queue* q,int x){
    if(q->rear=q-size-1)
        printf("Queue is full.\n");
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

void insert_front(struct Queue* q,int x){
    if
}

int delete_front(struct Queue* q){
    int x=-1;
    if(q->rear==q->front)
        printf("Queue is empty.\n");
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

int main(){
    
    return 0;
}
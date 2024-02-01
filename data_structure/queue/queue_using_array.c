//queue using array

#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q){
    printf("Enter the size\n");
    scanf("%d",&q->size);
    q->Q=(int*)malloc(q->size*sizeof(int));
    q->rear=q->front=-1;
}

void enqueue(struct Queue *q,int info){
    if(q->rear==q->size-1)
        printf("Queue is full\n");
    else{
        q->rear++;
        q->Q[q->rear]=info;
    }
}

int dequeue(struct Queue *q){
    int x=-1;
    if(q->front==q->rear)
        printf("Queue is empty\n");
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void display(struct Queue q){
    for(int i=q.front+1;i<=q.rear;i++)
        printf("%d ",q.Q[i]);
    printf("\n");
}

int main(){
    struct Queue q;
    create(&q);
    enqueue(&q,7);
    enqueue(&q,8);
    enqueue(&q,9);
    dequeue(&q);
    display(q);
    
    return 0;
}
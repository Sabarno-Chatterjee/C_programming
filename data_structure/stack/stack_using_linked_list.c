//implementation of stack using linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int info){
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    
    if(temp==NULL)
        printf("Stack overflow\n");
    else{
    temp->data=info;
    temp->next=top;
    top=temp;   
    }  
}

int pop(){
    int x=-1;
    struct Node *temp;
    if(top==NULL)
        printf("Stack underflow\n");
    else{
        temp=top;
        top=top->next;
        x=temp->data;
        free(temp);
    }   
    return x;
}

void Display(){
    struct Node *p;
    p=top;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    push(10);
    push(45);
    push(134);
    push(14);
    printf("%d\n",pop());
    Display();
    return 0;
}

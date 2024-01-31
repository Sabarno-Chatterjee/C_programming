//Implementation of singly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int arr[],int n){
    struct Node *temp,*last;
    first=(struct Node*)malloc(sizeof(struct Node*));
    first->data=arr[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;++i){
        temp=(struct Node*)malloc(sizeof(struct Node*));
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

int Count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
        
    return c;
}

void Insert(struct Node *p,int index,int info){
    struct Node *temp;
    if(index<0 || index>Count(p))
        return;
    
    temp=(struct Node*)malloc(sizeof(struct Node*));
        temp->data=info;
        
    if(index==0){
        temp->next=p;
        first=temp;
    }
    else{
        for(int i=0;i<index-1 && p;i++)
            p=p->next;
        
        temp->next=p->next;
        p->next=temp;
    }
}



void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){ 
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    create(arr,n);
    Insert(first,5,9);
    Insert(first,0,19);
    display(first);
    
    return 0;
}
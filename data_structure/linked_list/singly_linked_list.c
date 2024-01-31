//Implementation of singly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

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
    // int arr[]={1,2,3,4,5,6,7,8,9};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++)
    //     Insert(first,i,arr[i]);
    Insert(first,0,5);
    Insert(first,1,9);
    Insert(first,0,4);
    
    display(first);
    
    return 0;
}
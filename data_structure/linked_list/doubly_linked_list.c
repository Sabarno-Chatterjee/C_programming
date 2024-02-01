//doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int arr[],int n){
    struct Node *temp,*last;
    
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=arr[0];
    first->prev=first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}

int Length(struct Node *p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}

void Insert(struct Node *p,int index,int info){
    struct Node *temp;
    
    if(index<0 || index>Length(p))
        return;
        
    if(index==0){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=info;
        temp->prev=NULL;
        temp->next=first;
        first->prev=temp;
        first=temp;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=info;
        temp->prev=p;
        temp->next=p->next;
        
        if(p->next)                 //in case it's the last node
            p->next->prev=temp;
        
        p->next=temp;
    }
}

int Delete(struct Node *p,int index){
    int x=-1;
    if(index<1||index>Length(p))
        return x;
        
    if(index==1){
        first=first->next;
        if(first)                       //in case there is a single node and first is null
            first->prev=NULL;
        x=p->data;
        free(p);
    }
    else{
        for(int i=0;i<index-1;i++)
            p=p->next;
            
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
            
        x=p->data;
        free(p);
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
    int Arr[]={3,4,6,7,8};
    int n=sizeof(Arr)/sizeof(Arr[0]);
    create(Arr,5);
    // Insert(first,2,5);
    printf("%d\n",Delete(first,3));
    display(first);
    return 0;
}
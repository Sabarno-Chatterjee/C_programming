//Implementation of singly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;              //self referential DS
}*first=NULL;                       //global pointer to track the linked list


void create(int arr[],int n){
    struct Node *temp,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=arr[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

int Length(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

void Insert(struct Node *p,int index,int info){
    struct Node *temp;
    
    if(index<0 && index>Length(p))
        return;
        
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=info;
    
    if(index==0){
        temp->next=p;
        first=temp;
    }
    else{
        for(int i=0;i<index-1;i++)
            p=p->next;
        
        temp->next=p->next;
        p->next=temp;
    }
}

int Delete(struct Node *p,int index){
    int x=-1;
    struct Node *q=NULL;
    
    if(index<1 || index>Length(p))
        return x;
    
    if(index==1){
        x=first->data;
        first=first->next;
        free(p);
    }
    else{
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        
        x=p->data;
        q->next=p->next;
        
        free(p);
    }
    return x;
}

void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);      //printing the data present in the current node
        p=p->next;                  //traversing to new node
    }
    printf("\n");                   //new line
}

int main(){
    // int Arr[]={7,4,3,2,6,7,9};
    // // int n=sizeof(Arr)/sizeof(Arr[0]);
    // create(Arr,7);
    //67,68,69,70
    Insert(first,0,68);
    Insert(first,1,69);
    Insert(first,2,70);
    Insert(first,0,67);
    printf("%d\n",Delete(first,1));
    
    display(first);
    
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void create(int arr[],int n){
    struct Node *temp,*last;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=arr[0];
    head->next=head;
    last=head;
    
    for(int i=1;i<n;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}

int Length(struct Node *p){
    int l=0;
    do{
        l++;
        p=p->next;
    }while(p!=head);
    return l;
}

void Insert(struct Node *p,int index,int info){
    struct Node *temp;
    
    if(index<0 || index>Length(p))
        return;
    
    if(index==0){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=info;
        
        if(head==NULL){
            head=temp;
            head->next=head;
        }
        else{
            while(p->next!=head)
                p=p->next;
            p->next=temp;
            temp->next=head;
            head=temp;
        }
    }
    else{
        for(int i=0;i<index-1;i++)
            p=p->next;
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=info;
        
        temp->next=p->next;
        p->next=temp;
    }
}

int Delete(struct Node *p,int index){
    struct Node *q=NULL;
    int x=-1;
    
    if(index<1 || index>Length(p))
        return x;
    
    
    
    if(index==1){
        while(p->next!=head)
            p=p->next;
            
        x=head->data;
        if(head==p){
            free(head);
            head=NULL;
        }
        else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
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
    do{
        printf("%d ",p->data);
        p=p->next;
    } while(p!=head);
    printf("\n");
}

int main(){
    int Arr[]={5,4,7,8,9};
    int n=sizeof(Arr)/sizeof(Arr[0]);
    create(Arr,n);
    Insert(head,2,89);
    // Delete(head,4);
    display(head);
    
    return 0;
}
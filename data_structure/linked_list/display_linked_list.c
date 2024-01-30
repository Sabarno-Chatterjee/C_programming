#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


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

void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void RDisplay(struct Node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        RDisplay(p->next);
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

int RCount(struct Node *p){
    if(p==NULL)
        return 0;
    return 1+RCount(p->next);
}

int Sum(struct Node *p){
    int s=0;
    while(p!=NULL){
        s+=p->data;
        p=p->next;
    }
    return s;
}

int RSum(struct Node *p){
    if(p==NULL)
        return 0;
    return p->data + Sum(p->next);
}

int Max(struct Node *p){
    int max=p->data;
    p=p->next;
    while(p!=NULL){
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}



int Min(struct Node *p){
    int min=p->data;
    p=p->next;
    while(p!=NULL){
        if(p->data<min)
            min=p->data;
        p=p->next;
    }
    return min;
}

struct Node* Search(struct Node *p,int key){
    while(p!=NULL){
        if(p->data==key)
            return p;
        p=p->next;
    }
    return NULL;
}


int main(){
    struct Node *temp;
    int arr[]={5,6,44,3,9};
    create(arr,5);
    display(first);
    printf("\n");
    printf("%d\n",Min(first));
    
    
    Linear search
    temp=Search(first,44);
    if(temp)
        printf("Key is found %d\n",temp->data);
    else
        printf("Key not found.\n");
    
    
    
    
    return 0;
}
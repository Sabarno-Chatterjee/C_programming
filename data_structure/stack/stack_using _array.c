//implementation of stack using array

#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st){
    printf("Enter the size\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*)malloc(st->size*sizeof(int));
}

void display(struct Stack st){
    for(int i=st.top;i>=0;i--)
        printf("%d ",st.S[i]);
    printf("\n");
}

void push(struct Stack *st,int info){
    if(st->top==st->size-1)
        printf("Stack overflow\n");
    else{
        st->top++;
        st->S[st->top]=info;
    }
}

int pop(struct Stack *st){
    int x=-1;
    
    if(st->top==-1){
        printf("Stack underflow.\n");
        return x;
    }
    else{
        x=st->S[st->top];
        st->top--;
    }
    return x;
}

int main(){
    struct Stack st;
    create(&st);
    push(&st,1);
    push(&st,2);
    push(&st,3);
    push(&st,4);
    pop(&st);
    
    display(st);
    return 0;
}

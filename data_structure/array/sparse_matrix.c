#include<stdio.h>

struct elements{
    int i;      //row
    int j;      //column
    int x;      //non zero element
};

struct sparse_matrix{
    int m;      //row
    int n;      //column
    int data;   //non zero element
    struct elements *element;       //self referential data structure to store array of non zero elements dynamically
};

void create_sparse(struct sparse_matrix *S, int size){
    
}

int main(){
    
    return 0;
}
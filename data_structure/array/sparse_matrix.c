#include<stdio.h>
#include<stdlib.h>

struct elements{
    int i;      //row
    int j;      //column
    int x;      //non zero element
};

struct sparse_matrix{
    int row;      //row
    int column;      //column
    int num_non_zero;   //non zero element
    struct elements *element;       //self referential data structure to store array of non zero elements dynamically
};

void create_sparse(struct sparse_matrix *S){
    printf("Enter the dimensions of the matrix\n");
    scanf("%d%d",&S->row,&S->column);
    printf("Enter the number of non zero elements present\n");
    scanf("%d",&S->num_non_zero);
    
    S->element=(struct elements*)malloc(S->num_non_zero*(sizeof(struct elements)));
    printf("Enter the data\n");
    for(int i=0;i<S->num_non_zero;i++)
        scanf("%d%d%d",&S->element[i].i,&S->element[i].j,&S->element[i].x);
}

int main(){
    
    return 0;
}
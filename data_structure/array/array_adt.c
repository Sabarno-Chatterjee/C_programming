#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    printf("Elements:\n");
    for(int i=0;i<arr.length;++i)
        printf("%d ",arr.A[i]);
}

int main(){
    int n;
    struct Array arr;
    printf("Enter the size\n");
    scanf("%d",&arr.size);
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;
    
    printf("Enter the number of elements.\n");
    scanf("%d",&n);
    arr.length=n;
    
    printf("Enter all the elements.\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
        
    display(arr);
    
    
    return 0;
}
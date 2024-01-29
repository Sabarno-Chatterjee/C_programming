#include<stdio.h>
#include<stdlib.h>

int main(){
    
    //using single pointer
    // int *arr[3];
    // arr[0]=(int*)malloc(4*sizeof(int));
    // arr[1]=(int*)malloc(4*sizeof(int));
    // arr[2]=(int*)malloc(4*sizeof(int));

    //using double pointers
    int **arr;
    
    arr=(int**)malloc(3*sizeof(int*));
    arr[0]=(int*)malloc(4*sizeof(int));
    arr[1]=(int*)malloc(4*sizeof(int));
    arr[2]=(int*)malloc(4*sizeof(int));
    
    for(int i=0;i<3;++i){
        for(int j=0;j<4;j++){
            arr[i][j]=i+1+j;
        }
    }
    
    for(int i=0;i<3;++i){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
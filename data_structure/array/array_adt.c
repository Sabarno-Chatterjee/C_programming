#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    printf("Elements:\n");
    for(int i=0;i<arr.length;++i)
        printf("%d ",arr.A[i]);
}

void Append(struct Array *arr,int x){
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}

void Insert(struct Array *arr,int index,int x){
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr,int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

void Swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int LinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]==key){
            if(i-1>=0)
                //improving linear search using transposition
                // Swap(&arr->A[i],&arr->A[i-1]);
                //improving linear search using move to head so that next search for the same element is performed faster
                Swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}


//iterative version
int BinarySearch(struct Array arr,int key){
    int low=0,high=arr.length-1,mid;
    
    while(low<=high){
        mid=(low+high)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            high=mid-1;
        else 
            low=mid+1;
    }
    return -1;
}


//recursive version[although iterative is preffered as it is an eg of tail recursion]
int RecursiveBinarySearch(int a[],int low,int high,int key){
    int mid;
    if(low<=high){
        mid=(low+high)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return RecursiveBinarySearch(a,low,mid-1,key);
        else
            return RecursiveBinarySearch(a,mid+1,high,key);
    }
    return -1;
}

int main(){
    int n;
    struct Array arr={{2,3,4,5,6},10,5};
    // Append(&arr,78);
    // Insert(&arr,4,9);
    // printf("\n%d\n",Delete(&arr,5));
    // printf("%d\n",LinearSearch(&arr,4));
    // printf("%d\n",BinarySearch(arr,6));
    printf("%d\n",RecursiveBinarySearch(arr.A,0,arr.length-1,2));
    
    
    Display(arr);
    
    
    return 0;
}
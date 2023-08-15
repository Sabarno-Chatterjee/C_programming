#include<stdio.h>

void fun(int n){
    if(n>0){
        printf("%d\n", n);
        fun(n-1);
    }
}

int main(){
    int num = 3;
    fun(num);
    return 0;
}
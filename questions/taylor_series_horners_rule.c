#include<stdio.h>


//using for-loop
double e(double x,double n){
    double s=1;
    
    for(;n>0;n--){
        s = 1+x/n*s;
    }
    return s; 
}

int main(){
    printf("%lf\n", e(1, 10));
    
    
    return 0;
}
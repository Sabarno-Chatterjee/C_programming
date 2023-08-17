#include<stdio.h>


//using for-loop
// double e(double x,double n){
//     double s=1;
    
//     for(;n>0;n--){
//         s = 1+x/n*s;
//     }
//     return s; 
// }

//using recursion
double e(double x,double n){
    static double s=1;
    
    if(n==0)
        return s;
    
    s = 1+x/n*s;
    
    return e(x, n-1); 
}

int main(){
    printf("%lf\n", e(1, 10));
    
    
    return 0;
}
//Find the maximum number in an array of integers.

// #include<stdio.h>

// void sort(int arr[], int length){
//     int temp=0;
//     for(int i=0; i<length;i++)
//         for(int j=0; j<length-1-i; j++ ){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]= temp;
//             }
//         }
//     return;
// }

// int main(){
//     int arr[]={34,23,65,3,7,1,8,9};
//     int length=sizeof(arr)/sizeof(arr[0]);
//     sort(arr, length);
//     sort(arr, length);
//     printf("Maximum number: %d\n", arr[length-1]);


//     return 0;
// }

//Can you find out the sum of the digits of a number?

// #include<stdio.h>

// int sum_of_digits(int num){
//     int sum=0;
//     while(num){
//         sum += num%10;
//         num /= 10;
//     }

//     return sum;
// }

// int main(){
//     int num;
//     printf("Enter a number.\n");
//     scanf("%d", &num);
//     printf("%d\n",sum_of_digits(num));


//     return 0;
// }

//Try to swap two numbers with a third variable.

// #include<stdio.h>
// int main(){
//     int a=7,b=8,temp=0;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("a: %d, b= %d\n", a, b);
//     return 0;
// }

//Can you now swap two numbers without a third variable?

// #include<stdio.h>

// int main(){
//     int a=71, b=89;
//     a= a+b;
//     b = a-b;
//     a=a-b;

//     printf("a: %d, b= %d\n", a, b);
//     return 0;
// }

//using pointers

#include<stdio.h>

void swap(int *a,int *b){
    int temp =0;
    temp =*a;
    *a=*b;
    *b=temp;
    printf("a: %d, b: %d\n", *a, *b);
}

int main(){
    int a=56, b=78;
    swap(&a, &b);
    return 0;
}
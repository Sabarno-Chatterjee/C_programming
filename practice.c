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

// #include<stdio.h>

// void swap(int *a,int *b){
//     int temp =0;
//     temp =*a;
//     *a=*b;
//     *b=temp;
//     printf("a: %d, b: %d\n", *a, *b);
// }

// int main(){
//     int a=56, b=78;
//     swap(&a, &b);
//     return 0;
// }

//Can you check whether a number is prime or not?

// #include<stdio.h>

// void check_prime(int num){
//     int flag=1;
//     if(num==1)
//         printf("One is neither a prime nor a composite.\n");
//     else{
//         for(int i=2; i<num; i++){
//             if(num%i==0 && num!=2){
//                 flag = 0;
//                 printf("Not a prime.\n");
//                 break;
//             }
        
//         }
//     if(flag)
//             printf("Prime.\n");
//     }
// }

// int main(){
//     int num;
//     printf("Enter a num.\n");
//     scanf("%d", &num);
//     check_prime(num);

//     return 0;
// }

//Write a program to find the reverse of a number.

// #include<stdio.h>


// void reverse(int num){
//     int reverse=0;
//     while(num){
//         reverse = reverse*10 + num%10;
//         num = num/10;
//     }
//     printf("%d\n", reverse);
// }

// int main(){
//     int num;
//     printf("Enter a num.\n");
//     scanf("%d", &num);
//     reverse(num);

//     return 0;
// }

// Now when you know to reverse a number, can you try to check whether a number is a palindrome or not?

// #include<stdio.h>


// void reverse(int num){
//     int reverse=0, original_num=num;
//     while(num){
//         reverse = reverse*10 + num%10;
//         num = num/10;
//     }
//     if(original_num==reverse)
//         printf("It's a pallindrome.\n");
//     else
//         printf("It's not a pallindrome.\n");
// }

// int main(){
//     int num;
//     printf("Enter a num.\n");
//     scanf("%d", &num);
//     reverse(num);

//     return 0;
// }


//Find the factorial of a number.

// #include<stdio.h>

// int factorial(int num){
//     return (num==0 || num==1) ? 1 : num*factorial(num-1);
// }

// int main(){
//     int num;
//     printf("Enter a number.\n");
//     scanf("%d", &num);
//     printf("%d\n", factorial(num));

//     return 0;
// }

// Do you know about Fibonacci Series? The series following 1,1,2,3,5,8…, can you try to print the series upto n elements?

#include<stdio.h>

int fib(int n){
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    else    
        return fib(n-1)+ fib(n-2);      
}

int main(){
    int n;
    printf("Enter n.\n");
    scanf("%d", &n);
    for(int i =0; i<n; i++)
        printf("%d", fib(i));
    
    printf("\n");

    return 0;
}
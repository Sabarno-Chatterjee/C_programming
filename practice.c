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

#include<stdio.h>

int sum_of_digits(int num){
    int sum=0;
    while(num){
        sum += num%10;
        num /= 10;
    }

    return sum;
}

int main(){
    int num;
    printf("Enter a number.\n");
    scanf("%d", &num);
    printf("%d\n",sum_of_digits(num));


    return 0;
}
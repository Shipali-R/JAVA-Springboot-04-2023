#include<stdio.h>

void swap(int,int);
int main(){
    int a= 5;
    int b= 10;
    printf("The value before swapping a=%d & b=%d \n",a,b);

   

    swap(a,b);

    printf("The value after swapping %d & %d \n",a,b);

    // Output:
    // The value before swapping a=5 & b=10 
    // The value after swapping 5 & 10
    // This shows the scope of a,b 
    // As the memory allocated in the stack for main and swp methods were different,
    // And once the execution of swap is done, the space in memory is removed leaving behind a and b 
    // to the original values to they were before swaping.

    // To solve this problem we have pass by reference. 
    
}

void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;

    
}
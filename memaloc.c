#include<stdio.h>

int main(){
    int a= 10;
    double d=20.0;
    printf("The value of a is %d \n",a);
    
    printf("The memory allocated to a is %ld \n",sizeof(a));
    printf("The memory allocated to d is %ld \n",sizeof(d));
}
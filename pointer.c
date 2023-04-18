#include<stdio.h>


//Pass by Reference & pass vy value.
void swap(int *,int *);
int main(){
    int a= 5;
    int b= 10;

    //Pointer variables p and q.
    int *p = &a;
    int *q = &b;

    double *d;
    char *c;

    //Dangling pointer 
    //The stack space for line 19 to line 25 will be removed and the variable x will be removed.
    //But pointer y will be still holding the address of variable x.
    int *y;

    {
        int x=100;
        y=&x;
        
    }
    printf("The value of X is %ld \n", *y);

    //Sizes of pointer is always same as it stores the starting address of the space.
    printf("The size of integer pointer p is %ld \n",sizeof(p));
    printf("The size of double pointer d is %ld \n",sizeof(d));
    printf("The size of character pointer c is %ld \n",sizeof(c));

    printf("The value of variable stored at p is %ld \n", *p);

    printf("The value before swapping a=%d & b=%d \n",a,b);

    swap(p,q);

    printf("The value after swapping %d & %d \n",a,b);

}

void swap(int *p, int *q){
    int temp=*p;
    *p = *q;
    *q=temp;    
}
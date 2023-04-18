#include<stdio.h>
#include<iostream>

class Parent{
    public:
        //Accisible only within the class as the access specifier is private.
        int a;
        int b;
        int *pt;
    public:
    //Parameterized Constructor
    Parent(int p,int q){
        a=p;
        b=q;
    }
    //Default Constructor
    Parent(){
        std::cout<<"I am a constructor of Parent \n";
    }
    ~Parent(){
        std::cout<<"I am a destructor of the Parent \n";
    }
    void show(){
            std::cout<<"I am show of the Parent and going to occupy 100 bytes of space \n";
            pt = (int*) malloc(100);
        }

        
};

class Child : public Parent{
    public:
        int c;
        int d;
    Child(){
        std::cout<<"I am constructor of Child \n";
    }
    Child(int p,int q){
        c=p;
        d=q;
        std::cout<<"I am a parametrized constructor of Child \n";
    }
    ~Child(){
        free(pt); 
        std::cout<<"I am a destructor of the Child \n"; 
        //Destructor needed to avoid memory leak.
        //As the heap memory will not be deleted once the main function ends.
        //It frees only the stack space.
        //Destructor is used to de allocate the resources occupied by the object when not needed.
        //Destructor does not take any arguments.
    };
};

int main(){
    // Parent p;
    // Parent p1(10,20);
    // Parent p3(100,200);
    
    Child c;
    Child c2(100,200);
    c.show();
    // p1.show();
    // p3.show();
    
    
    
    
    
}   
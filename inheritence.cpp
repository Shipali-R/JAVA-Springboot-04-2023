#include<stdio.h>
#include<iostream>

class Parent{
    private:
        //Accisible only within the class as the access specifier is private.
        int a;
        int b;
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
            std::cout<<"I am show of the Parent \n" <<a <<b << "\n";
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
        std::cout<<"I am a destructor of the Child \n";
    }

};

int main(){
    // Parent p;
    // Parent p1(10,20);
    // Parent p3(100,200);
    
    Child c;
    Child c2(100,200);
    // p1.show();
    // p3.show();
    
    
    
    
    
}   
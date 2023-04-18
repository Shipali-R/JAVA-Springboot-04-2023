#include<stdio.h>
#include<iostream>

class Parent{
    private:
        //Accisible only within the class as the access specifier is private.
        int a;
        int b;
    public:
        void show(){
            std::cout<<"I am show of the Parent \n" <<a <<b << "\n";
        }

        void setValues(int p, int q){
            a=p;
            b=q;;
        }
};

class Child : public Parent{
    public:
        int c;
        int d;

};

int main(){
    Parent p;
    Child c;
    p.setValues(10,20);
    p.show();
    c.show();
    std::cout<<"This is first C++ program \n";
    std::cout<<"The size of the Parent object is "<< sizeof(p) <<"\n";
    std::cout<<"The size of the Child object is "<< sizeof(c)<< "\n"; 
}   
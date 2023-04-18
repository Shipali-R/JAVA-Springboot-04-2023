#include<stdio.h>
#include<iostream>

class Parent{
    public:
        int a;
        int b;

        Parent(){
            std::cout<<"I am constructor of Parent.\n";
        }

        void show(){
            std::cout<<"This is a plain show of Parent\n";
        }

        void show(int p, double q){
            std::cout<<"I am also show method but I am passing whatever you have passed "<<p<< std::endl;
        }

        void show(double q, int p){
            std::cout<<"I am also show method but I am passing whatever you have passed "<<p<< std::endl;
        }
};

class Child: public Parent{
    int c;
    int d;
    public:
    void show(){
            std::cout<<"This is a plain show of Child\n";
        }
    //The child has total 3 +1 shows, when we invoke the child method it will call its own show.
    //This is called as Method overriding.
};

int main (){
    Parent p;
    Child c;
    std::cout<<"The size of the Parent object is " <<sizeof(p);
    std::cout<<"The size of the Child object is " <<sizeof(p);
    p.show();
    //p.show(5,6.2);
    c.show();
    //Show has 3 forms and the compiler is making the decision of which show to call and this is the 
    //static time where the decision is made hence we call it static polymorphism.
};

//Method overloading means functions with same name but different arguments.
//Method overloading is an example of Static Polymorphism.
//Polymorphism is ability to take more than one form.
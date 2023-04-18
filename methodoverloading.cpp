#include<stdio.h>
#include<iostream>

class Parent{
    public:
        int a;
        int b;

        Parent(){
            std::cout<<"I am constructor of Parent.\n";
        }

        virtual void show(){
            //In JAVA all funstions are by default virtual.
            //Hence no problem of dynamic /runtime polymorphism.
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

    //Object pointers
    Parent *pt; //We can use the pointer object of parent class to invoke the child methods as well. 
    Child *ch;

    pt = &p;
    pt->show(); //Invoking method through pointer of parent class.
    pt = &c; //Using pointer of parent for Child object. 
    //ch = &c;
    ch->show(); //This will also override the parent show method.
    pt->show(); //This should invoke child show method but it does not. It invokes parents show method.

    //The virtual keyword makes sure that when we use parent pointer to call child's show method.
    //It should call child's show method and this process of deciding that which method should be called.
    //is taken at runtime by the compiler, hence this is runtime or dynamic polymorphism.

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
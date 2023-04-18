#include<stdio.h>
#include<iostream>

class ParentA{
    public:
    int a;
    int b;
     ParentA(){
        std::cout<<"I am a constructor of A \n";
    }
    ~ParentA(){
        std::cout<<"I am a destructor of the A \n";
    }
};

class ChildB: public ParentA{
    public:

    ChildB(){
        std::cout<<"I am a constructor of B \n";
    }
    ~ChildB(){
        std::cout<<"I am a destructor of the B \n";
    }
};

class ChildC: public ParentA{
    public:

    ChildC(){
        std::cout<<"I am a constructor of C \n";
    }
    ~ChildC(){
        std::cout<<"I am a destructor of the C \n";
    }
};

class ChildD: public ChildB{
    public:

    ChildD(){
        std::cout<<"I am a constructor of D \n";
    }
    ~ChildD(){
        std::cout<<"I am a destructor of the D \n";
    }
};

class ChildE: public ChildB{
    public:

    ChildE(){
        std::cout<<"I am a constructor of E \n";
    }
    ~ChildE(){
        std::cout<<"I am a destructor of the E \n";
    }
};

class ChildF: public ChildC{
    public:

    ChildF(){
        std::cout<<"I am a constructor of F \n";
    }
    ~ChildF(){
        std::cout<<"I am a destructor of the F \n";
    }
};

class ChildG: public ChildC{
    public:

    ChildG(){
        std::cout<<"I am a constructor of G \n";
    }
    ~ChildG(){
        std::cout<<"I am a destructor of the G \n";
    }
};

class ChildH: public ChildD,public ChildE{
    public:

    ChildH(){
        std::cout<<"I am a constructor of H \n";
    }
    ~ChildH(){
        std::cout<<"I am a destructor of the H \n";
    }
};

class ChildI: public ChildF,public ChildG{
    public:

    ChildI(){
        std::cout<<"I am a constructor of I \n";
    }
    ~ChildI(){
        std::cout<<"I am a destructor of the I \n";
    }
};

class ChildJ: public ChildH,public ChildI{
    public:

    ChildJ(){
        std::cout<<"I am a constructor of J \n";
    }
    ~ChildJ(){
        std::cout<<"I am a destructor of the J \n";
    }
};




int main(){
    //ChildB b;
    ChildJ j;

    
}
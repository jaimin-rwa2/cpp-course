#include<iostream>
using namespace std;


class A{

    private:
        int pvt = 1;
    
    protected:
        int prot = 2;

    public:
        int pub = 3;
        int get_a_protected(){
            return prot;
        }

};


class B: private A{

    private:

    protected:

    public: 
        // all public data of A is now public for B
        int get_protected(){
            return prot;
        }

};


class C: public B{

    public:
        int get_protected(){
            return pub;
        }

};



int main(){


    C c;

    // cout << c.pub << endl;
    // cout << b.get_protected() << endl;


    return 0;
}

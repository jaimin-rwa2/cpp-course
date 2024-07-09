#include<iostream>

using namespace std;


class Abst{
    public:
        virtual void function1(int a) = 0; 
        int sum(int a, int b){
            return a + b;
        }
};

class NotAbst: public Abst{
    public:
        void function1(int a){
            cout << "\nfunction 1 called : " << a << endl;
        }
};


int main(){

    NotAbst na;

    cout << na.sum(10, 20);
     na.function1(55);

    return 0;
}

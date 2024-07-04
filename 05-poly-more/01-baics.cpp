#include<iostream>
using namespace std;



class Data{

    public:
        int numb;


        Data(int num){
            numb = num;
        }

        Data operator+(Data b){
            return Data(numb + b.numb);
        }

        int print(){
            return numb;
        }
};

int main(){


    Data a(10);
    Data b(20); 

    Data output =  a + a + b;

    cout << output.print() << endl;

    return 0;
}





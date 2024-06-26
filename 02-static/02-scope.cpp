#include <iostream>
using namespace std;

class A {
public:
    string name;
    static int data;

    void print_name(){
        cout << name << endl;
        cout << data << endl;
    }
    static void print_data(string name){
        cout << name << endl;
        // cout << data << endl;
    }
};

// memory alocation to static variable (must)
int A::data = 55;

int main()
{
    A a;
    a.name = "a object";
    // a.print_name();
    a.print_data(a.name);

    return 0;
}
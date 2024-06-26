#include<iostream>
using namespace std;

class User{
    public:
        string name;
        string course;
        string add;
        string info;
};

int main(){

    User u1;
    u1.name = "jaimin";
    u1.course = "jaimin";
    u1.add = "jaimin";
    u1.info = "jaimin";

    User u2;
    u2 = u1;
    cout << u2.name << endl;

    u2.name = "gunjan";


    cout << u2.name << endl;
    cout << u1.name << endl;

    return 0;
}
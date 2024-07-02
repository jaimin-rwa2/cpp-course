#include<iostream>
using namespace std;


class User1{
public:
    string name = "User1";
};

class User2{
public:
    string name = "User2";
};


class Student  : public User1, public User2 {
    public:
        void print_name(){
            cout << User1::name << endl;
            cout << User2::name << endl;
        }
};

int main(){

    Student s1;
    User1* user1ptr = &s1;
    User2* user2ptr = &s1;

    cout << user2ptr->name << endl;

    return 0;
}
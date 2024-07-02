#include<iostream>
using namespace std;


class User{
private:
    /* data */
public:
    string name;

    User(){
        // default 
    }

    User(string name){
        this->name = name;
    }

    void set_name(string name){
        this->name = name;
    }

    string get_name(){
        return name;
    }
};

class Student  : public User {
    public:
        Student(){

        }

        Student(string name) : User(name) {
        }

        void print_parent_data(){
            cout << this->name << endl;
        }
};

int main(){

    Student s1("jaimin");
    s1.print_parent_data();

    return 0;
}
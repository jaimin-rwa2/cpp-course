#include<iostream>
using namespace std;

class User{

    public: // default
        string name;
        unsigned int age;
        unsigned int id;
        string course;
        bool gender;  // male : true, female : false
        static unsigned int count;

    public:
        User(){
            count+= 1;
            id = count;
        }

        User(string name, unsigned int age, string course, bool gender){
            count+= 1;
            id = count;

            this->name = name;
            this->age = age;
            this->course = course;
            this->gender = gender;

        }

        void print_info(){
            cout <<  "id: " << id << endl;
            cout <<  "name: " << name << endl;
            cout <<  "age: " << age << endl;
            cout <<  "course: " << course << endl;
            cout <<  "gender: " << gender << endl;
            cout << endl << endl;
        }

        static void print_count(){
            cout << count << endl;
        }
};

unsigned int User::count = 0;

int main(){
    
    User u1;
    u1.print_info();
    User u2("name", 24, "full stack", true);
    u2.print_info();
    u1.print_count();
    
    User u3;

    u1.print_count();
    
    return 0;
}
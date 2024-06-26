// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class User{
    
    public:
        static char count;
        string name;
};

char User::count = 'A';  // memory allocation to static variable is must


int main() {
    cout << "User::count : " << User::count << endl;
    User u1;
    cout << "User::count : " << u1.count << endl;
    User u2;
    cout << "User::count : " << u2.count << endl;
    User u3;
    cout << "User::count : " << u3.count << endl;
    User u4;
    cout << "User::count : " << u4.count << endl;
    User u5;
    
    User u6;
    User u7;

    cout << "User::count : " << User::count << endl;

    return 0;
}
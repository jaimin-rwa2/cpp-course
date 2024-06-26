#include<iostream>
using namespace std;

class Car{

    private:
        string name = "defalut_name";  // class variable
        string username;  // class variable
        float PI = 3.14;
        int permision = 1; 
    public:

        void set_name(string name){
            // setter method
            if(permision==1){
            this->name=name;
                cout << this << endl;
            }   
            
        }
        string get_name(){
            // getter method
            return name;
        }
        float get_PI(){
            return PI;
        }
};



int main(){
    Car car;
    cout << &car << endl;
    car.set_name("v8 supra");
    string car_name = car.get_name(); 
    cout << "namne : "<< car_name << endl;
    
    Car car2;
    cout << &car2 << endl;
    car2.set_name("m g vegan");
    string car2_name = car2.get_name();
    cout << "namne : "<< car2_name << endl;
    return 0;
}
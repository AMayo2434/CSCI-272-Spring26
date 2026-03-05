#include <iostream>

using namespace std;

class Car {
    private:
        string brand {"Volkswagen"};
        string model {"Polo"};
        int year {2012};
        
    public:
    Car(){
        
    }
    
    Car (string b, string m, int y) {
        b = brand;
        m = model;
        y = year;
        
    }
    
    Car(const Car & other){
        brand = other.brand;
        model = other.model;
        year = other.year;
    }
    
        ~Car(){
            cout << "Object has been destroyed." << endl;
        }
        
        void startEngine(){
            cout << "start engine" << "{Brand: " << brand
            << " | Model: " << model << "}" << endl;
        }
};
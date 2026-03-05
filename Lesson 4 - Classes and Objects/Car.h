#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
        string brand {"Volkswagen"};
        string model {"Polo"};
        int year {2012};
    public:
        Car(){
            //Default Constructor
        }
        Car(string b, string m, int y){
            brand = b;
            model = m;
            year = y;
        }
        Car (const Car & other) {
            brand = other.brand;
            model = other.model;
            year = other.year;
        }
        
        void startEngine () {
            cout << brand << " " << model << " started engine." 
            << endl; 
        }
        
      
        
};

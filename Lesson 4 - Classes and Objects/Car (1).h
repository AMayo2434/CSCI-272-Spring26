using namespace std;

class Car {
    private:
        string brand{"Volkswagen"};
        string model{"Polo"};
        int year{2012};
    public:
        void startEngine(){
            cout << "start engine" << endl;
        }
        
        
    void accelerate(){
        cout << "accelerate engine" << endl;
        
    }
};

class Person {
public:
    string name{"Alicia"};
    int age{21};
    char gender{'F'};
public:
    void introduce(){
        cout << "Hello, I'm " << name << ".\nI'm " <<
        age << " years old.\n";
        
        if (gender =='M') {
            
            cout << "I am male.";
        }
        
        else if (gender == 'F'){
            cout << "I am female.";
    }
    
        else {
            cout << "Gender uspecified." << endl;
        }
}

};
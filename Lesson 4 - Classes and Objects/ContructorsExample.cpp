/*
Name: Alicia Mayo
Course: CSCI 272 - Section 02
Lesson Number: Lesson 4
Code Topic: Constructor Example
Date: 03/02/2026
*/

#include "Car.h"

int main(){
    Car car1; // default Constructor
    Car car2("Tesla","X",2022); // parameterized Constructor
    Car car3(car2);
    
    Car* pCar1 = new Car; // default Constructor
    Car* pCar2 = new Car("Tesla", "X", 2022); // parameterized Constructor
    
    Car car[20]; // default Constructor
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    
    pCar1->startEngine();
    pCar2->startEngine();
    
    car[0].startEngine();
    
    return 0;
}

/*
Reflection:
1. What I understood:
    I understood how constructors are used to create preset 
    values for objects. New objects will be able to access
    the public rules of a class. Classes will be created
    with class in all lower case followed by the capitalized
    name of the class. A semicolon must be at the end of the
    closing bracket to declare a class. 

2. Difficulties:
    I initially struggled with getting the .startEngine(); 
    function to run. I then was able to remember, but had to
    ultimately refer to my notes for the proper formatting.
    In CSCI 271, we were told to think of void of a function
    that doesn't print, so I don't think of it as something 
    that will make the function work. I will try to remember 
    for the future that the date type can be used for this 
    purpose. 
    
3. Research
    I researched what constructors were. I learned that they
    are member funcitons that are called when an object of the 
    same class is created. I also researched why constructors
    were important. They're important because they help manage
    resources and save space. They also encapsulate the code, making
    it easier to read. 

4. AI Usage
    I used Google Gemini to research the importance of constructors
    in C++.

5. What I learned:
    I learned how to properly format files to have them run 
    successfully.I also learned that you do not need to include 
    libraries when they have already been declared in a file. 
    I was able to put the necessary libraries to inititalize 
    main in Car.h and they were able to work. 
*/



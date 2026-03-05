/* 
Name: Alicia Mayo
Course: CSCI 272 - Section 02
Lesson Number: Lesson 4
Code Topic: Classes Example
Date: 03/01/2026
*/

/*

C++ syntax to create a class

class Class_Name{
    
    data_type veriable_name;
    
    return_type function_name(parameter list)
    {
};

*/

#include <iostream>
#include "Car(1).h"
#include "Person.h"

int main(){
    
    Car car1;
    
    car1.startEngine();
    car1.accelerate();
    

    cout << endl;
    cout << endl;
    
    Person person1;
    
    person1.introduce();
} 

/*
Reflection:
1. What I understood:
    I understood how to create seperate files and include them
    in the main function. I also learned that using . followed
    by the name of the function from the .h files to coll it.
    The use of seperate files allows the code to be organized
    and easy to read. The code in the main file isn't extra
    long due to extra lines of code. It optimizes space.
    
2. Difficulties:
    Some difficulties I had were learning how to make sure that
    the .h files were included in the main file. I also strugged
    with remembering that I didn't have to repeat including the
    library at the top of the header of each file. 
    
3. Research:
    I looked up what classes in C++ were and how they were 
    important to the programming language. It was defined 
    as a user-defined blueprint or template for creating 
    objects. Those objects then contain the same functions
    or variables that were assigned in the class. The 
    example showed how that worked. Classes are important 
    in C++ because they organize code and make it more efficent.
    This is another storage-saving tool in C++. 

4. AI Usage:
    I did not use AI for this example.

5. What I learned:
    I learned that C++ files can interact with each other when they
    are included. You can create a class in one file, include it
    in another, and create an object of that class in another file.
    Classes can also include functions and other files can access
    those fuctions when objects are created.
*/













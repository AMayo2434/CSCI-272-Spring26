/*
Name: Alicia Mayo
Course: CSCI 272 - Section 02
Lesson Number: Lesson 4
Code Topic: Deconstructors Example
Date: 03/02/2025
*/

#include "Veh.h"

int main(){
    
    Car car1;
    
    Car car2{"Tesla","X",2022};
    
    Car car3(car2);
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    
    //Destructor will be automatically called
    return 0;
}

/*

Reflection:
1. What I understood:
    I understood how to create a seperate file and create a class.
    Libraries do not need to be called multiple times and can be 
    referenced across files. There is a destructor that destroys
    objects to save space in C++. Once the object is no longer
    needed, it is destroyed. Destructors automatically activate 
    when the code runs. Destruction of objects occur in the background
    of the program so you will need to write 'Object has been destoryed'
    to know at what point in occured in the program.
    
2. Difficulties:
    I struggled with creating the functions for the constructors. With
    each example I restarted to remember how to create the files and 
    create the constructors. I remembered how to do the parameterized
    constructor, but not the copy and default constructors. I will try to 
    memorize those for the future. 
    
3. Research:
    I researched the importance of constructors in C++. They are important
    for memory deallocation which saves space in the file. This will allow
    the program to run smoothly because it isn't processing many lines of 
    code every time it runs. It also allows the system to be able to be
    free of uses that 
    
4. AI Usage:
    I did not use AI for this file. 

5. What I learned:
    I learned that you would need to have a deconstructor that deallocates
    memory in a file to save file size. I also learned that the deconstructor
    runs automatically on its own one the program compiles without errors. 

    */
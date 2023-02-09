#include <iostream>

/*

Structs are code elements that can handle variables of multiple data types or arrays of different things
in C they are like an tentative of the Peasant Midget C to handle objects, but here in the gigachad kingdom
they have a very nice usage, they can also be used to handle dynamic memory structures

*/

struct student { //struct declaration
    std::string name;
    double gpa;
    bool enrolled;
};

//structs behave like their own data type so, all functions and features used to data types can be used on it

void printStruct(student std);

int main()
{
    //to use a struct, we need to instantiate it just like an true object:
    student studentone; //then we can assign values to the things in the struct doing this:
    studentone.name = "Random Shitass";
    studentone.gpa = 3.2;
    studentone.enrolled = true;

    std::cout << studentone.name << '\n';
    std::cout << studentone.gpa << '\n';
    std::cout << studentone.enrolled << '\n';

    //and just like an object, we can have multiple things of this:

    student studentTwo;
    studentTwo.name = "Second Random Shitass";
    studentTwo.gpa = 1.4;
    studentTwo.enrolled = false;

    //we could maybe say that this is some sort of object orientation but imperative as fuck
    //and not that useful when we need true object orientation which is the failure of C
    //we can also pass a struct as a function argument

    printStruct(studentTwo); //here i'm passing this struct object to the function, also i can have a struct
                                 //as a function return data type 

    return 0;
}

void printStruct(student std) {
    std::cout << std.name << '\n';
    std::cout << std.gpa << '\n';
    std::cout << std.enrolled << '\n';
}
#include <iostream>

/*

variables and data types works just like in C

*/

int main()
{

    int x; //declaration
    x = 5; // Atribution
    int y = 6; // i can do this type of atribution
    int sum = x + y; //i can do it too

    //Data types:

    //Int : integer, ex:

    int age = 20;
    int year = 2023;
    int days = 7;

    //double: floating point with double precision than float ex:

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //char: single characters

    char grade = 'A';
    char initial = 'B';

    /*
    
    one thing that makes c++ a gigachad language is the fact that it have booleans, so, here you won't need to import
    a library to handle booleans or make a struct to handle this type of thing and potentially don't waste memory like
    we would in the not good C
    
    */

    bool isStudent = false;
    bool isPowered = true;
    //this is better because i'm already saying to the compiler that it just can assume two states or just one bit of space
    //instead of using a define because not using bool type can potentially lead to memory wastage

    //strings

    std::string randomString = "YEAH BITCH, MAGNETS";
    std::string name = "Ricardo Lopes";


    // displaying variables:
    std::cout << x << '\n'; //it's possible use the \n like this too: std::cout << x + '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " Years Old" << '\n';

    return 0;
}
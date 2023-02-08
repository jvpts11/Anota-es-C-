#include <iostream>
#include <string>

//by this point you're pretty much familiar with the << operator no? but i didn't explained what it is
/*
the << operator is called as insertion operator, basically it means: hey, put this into this

alternatively, we have the >> operator

the >> operator is called extraction operator, basically it means: hey, extract something from here

//bellow, there is an example of the usage of these two operators
*/

int main()
{
    std::string name;
    int age;

    std::cout << "What's your name?\n";
    std::cin >> name; // what i'm saying here is: hey, put what enter in the console into the name variable

    std::cout << "What's your age?\n";
    std::cin >> age;

    std::cout << "Hello " << name << '\n'; // output the inserted string
    std::cout << "You are " << age << " years old\n";

    std::string name2;
    int age2;

    //what if i want to get an string with spaces like an full name? i will just do this:

    std::cout << "What's your name? \n";
    std::getline(std::cin >> std::ws,name2); //this is defined in the string library

    std::cout <<"Hello!" << name2;
    return 0;
}
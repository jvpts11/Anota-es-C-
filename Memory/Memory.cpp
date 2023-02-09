#include <iostream>

/*

Just like any other language, when we program in C++, we are in fact handling memory adresses in some way

A memory adress is the location of a certain data inside the Random Acess Memory (RAM)

handling these adresses opens a complete new door in C++ and in other languages

unfortunately, C++ doesn't have it's own garbage collector, but it can be implemented by external libraries

pretty much every single thing in C++ have a memory adress

as shown below:

*/

void this_is_a_function();

class DeezNuts {

};

int main()
{
    int a = 32;
    bool isFlying = true;
    std::string name = "A random person name";
    DeezNuts deeznuts;

    std::cout << &name << '\n'; //will show the memory adress of this thing
    std::cout << &isFlying << '\n';
    std::cout << &a << '\n';
    std::cout << &this_is_a_function << '\n'; //this will get the memory adress of a function too!
    std::cout << &deeznuts << '\n'; //this will get the memory address of this object
}

void this_is_a_function() {

}
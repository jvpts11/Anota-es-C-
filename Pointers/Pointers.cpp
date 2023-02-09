#include <iostream>

/*

this is one of the most important things in programming

a pointer is a variable that store an memory address

it's like i was saying where is the water rather than carrying the water itself with me

there are two operators when we handle with pointers:

& - the address operator

* - the dereference operator

you can make pointers of pretty much everything

here is an simple example below:

*/

int main()
{
    using std::string;
    using std::cout;

    string name = "Vergil, the Alpha and the Omega";
    string* pName = &name; //i'm saying here that this will have the address of the name variable

    cout << pName << '\n'; //this will print directly the address of the variable referenced there
    cout << *pName; //this will make the program go to the value of what this pointer is pointing for then print it

    return 0;
}
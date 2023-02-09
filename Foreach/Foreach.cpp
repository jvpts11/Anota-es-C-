#include <iostream>

/*

Just like other gigachad languages, C++ have a foreach loop

this type of loop deserve it's own attention because it is really nice:

it iterates through a iterable dataset, what it means? you can easely iterate an array without doing that
amount of shit you need to do when using a normal for loop

ex:

*/

int main()
{

    /*
    
    std::string names[] = {"Jandre","Jario","Jicardo","Joao"};

    for (int i = 0; i < sizeof(names) / sizeof(std::string);i++) {
        std::cout << names[i] << std::endl;
    }
    
    instead of doing this above, we can do it in the form of a foreach loop:
    */

    std::string names[] = { "Jandre","Jario","Jicardo","Joao" };

    for (std::string name : names) {
        std::cout << name << '\n';
    }

    return 0;
}
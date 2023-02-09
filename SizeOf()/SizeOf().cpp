#include <iostream>
#include <locale>

/*

the sizeof function returns the size in bytes of something, for example:

*/

int main()
{
    std::cout << sizeof(int) << " <- this is the max size of an int variable" << std::endl;

    //you can see the size of pretty much any variable or data type

    //with this you can use it to see the size of an array and then do useful tricks as exemplified bellow:

    int intarray[] = { 1,2,3,4,5,6,7,8 };

    std::cout << sizeof(intarray) / sizeof(int) << " <- this is the size of this array" << std::endl;

    //this can be used to iterate through an array:

    std::string names[] = {"Jandre","Jario","Jicardo","Joao"};

    for (int i = 0; i < sizeof(names) / sizeof(std::string);i++) {
        std::cout << names[i] << std::endl;
    }


    return 0;
}
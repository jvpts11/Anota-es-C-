#include <iostream>

/*

In the peasant C, we can use the malloc() function to allocate memory or dynamically use it

here in C++, we can do something more convenient and more gigachad, we can use the 'new' keyword

this keyword works the same way as the new in the Noble Java or in the Mighty Kotlin or in the Supreme C#

btw C++ is the Emperor C++ in this form of description

*/

int main()
{
    int* pNum = nullptr;

    pNum = new int; //here i'm saying that this pointer have a memory size compatible with an int


    *pNum = 21;

    std::cout << "Memory address: " << pNum << std::endl;
    std::cout << "Value: " << *pNum << std::endl;

    //this way, we can dynamically change values in a memory address

    //if you don't need to use that memory anymore, you can delete it like this:


    delete pNum; //with this i'm freeing the memory from something that i don't need anymore instead of using the free() peasant function

    //we can also do it to an array:

    int arrayOfThings[] = {1,2,3,4,5,6,7,8};

    delete[] arrayOfThings; //this way i'm freeing this array

    return 0;
}
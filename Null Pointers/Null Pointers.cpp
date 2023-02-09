#include <iostream>

/*

Null pointers are pointers that don't have value

*/

int main()
{
    int* nullpointer; //this pointer isn't null, it is just unitialized
    int* pointer = nullptr; //this pointer is null
    int* secondPointer = NULL; //this pointer is also null, but using this macro from the midget C
    int x = 123;

    if (pointer == nullptr) { //we can check if a pointer is null
        std::cout << "this thing is still null" << '\n';
    }

    pointer = &x; //this way, that pointer up there isn't null anymore

    if (pointer == nullptr) {
        std::cout << "this thing is still null" << '\n';
    }
    else {
        std::cout << "this thing is not null" << '\n';
    }

    //pointer null check is extremely important because sometimes the program can be just not running because a pointer isn't
    //initialized or if it is null, so, be careful and don't mess it up bro

    if (secondPointer == nullptr) { //we can do this type of checking even if that thing uses the midget C feature
        std::cout << "This is using the midget C feature";
    }


    return 0;
}
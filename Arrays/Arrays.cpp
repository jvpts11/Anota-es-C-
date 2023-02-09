#include <iostream>
#include <string>

/*

In C++ there are arrays like C or any other language, they work the same way as any other language

you can have an array of pretty much every data type you want

to declare an array, you need to do:

<data type> array_name[];

and because C++ is a gigachad language, it support dynamic size arrays unlike it's midget brother, C
*/


int main()
{

    int a[] = {1,2,3}; //an integer array

    std::cout << a << std::endl; //if i do this, it will just show the memory address of the array

    //if i want to print everything on it i can do:

    for (int i = 0; i < 3; i++) {
        std::cout << a[i] << std::endl;
    }

    /*
        but if i want to print just one thing of the array, i will need to specify the index of it

        in arrays, the index start with 0, so, if i want to print the second member of the array, i need to say 1 in the index
    */

    std::cout << a[1] << " <- this is the printed member of the array";

    return 0;
}
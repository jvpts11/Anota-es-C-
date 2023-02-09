#include <iostream>

/*

Recursion is when you invoke an function inside that own function, so it can ease some complex tasks,

here is an example:

*/


void walk(int steps);
int factorial(int num);

int main()
{
    walk(100);
    std::cout << factorial(10) << '\n';

    return 0;
}

int factorial(int num) {
    if (num > 1) {
        return num * factorial(num -1); //another example of recursion
    }
    else {
        return 1;
    }
}

void walk(int steps) {
    if (steps > 0) {
        std::cout << "You take a step" << '\n';
        walk(steps - 1); //here is the recursive thing, here i invoked the function within itself
    }

    /*
    recursion can be easier to write but it uses more memory and process time, so be in mind of this
    */
}
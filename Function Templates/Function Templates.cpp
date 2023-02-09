#include <iostream>

/*

they are used to explain how a function should look like
they can be used to generate how much overloads you needed each using different data types

suppose that we have:

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

char max(char a, char b) {
    return (a > b) ? a : b;
}

this works, these two overloads will work ok but here we have 
three functions that do exactly the same but use different data types
so it isn't that efficient neither to write or something like that
there is when templates enter in the game

to declare a template, we first need to do this:

template <typename (the name of your type of this template)>

then we can have something like this:

*/

template <typename T>

//what if we need another tempalte datatype declaration? we can do this:

//template <typename U,typename V, typename X, typename Y, typename Z> we can have a lot of template names

T max(T a, T b) {
    return (a > b) ? a : b;
}

//if we needed we could use the auto keyword so the compiler would deduce which data type is that function

int main()
{
    auto a = 1; //btw i can do this lazyness too if i want

    std::cout << max(1, 2) << '\n'; //this can return anything without specifying a type


    return 0;
}
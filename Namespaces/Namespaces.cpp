#include <iostream>

/*
    * definition of a namespace:
    *
    * A namespace is a declarative region that provides a scope
    * to the identifiers (the names of types, functions, variables, etc) inside it.
    * Namespaces are used to organize code into logical groups and to prevent
    * name collisions that can occur especially when your code base includes multiple libraries.
    *
    */

    //Basically if you have a very large program, namespaces are used to separe everything and organize better

    /*
    * ex:
    *
    * int x = 0;
    *
    * int x = 1;
    *
    * this won't compile
    *
    * if i want to make it i will need to create a namespace
    * 
    * fun fact, i can declare whatever i want in namespaces like functions, classes and other things
    *
    * namespace example bellow:
    */

namespace example {
    int x = 1;
}

namespace secondNamespace {
    int x = 2; //as long things with same name aren't in the same namespace, everyting is fine
}

namespace thirdNamespace {
    int value = 4;
}

int main()
{
    int x = 0;

    std::cout << x << '\n';

    //to access a namespace, you will need to use the scope resolution operator '::'

    std::cout << example::x << '\n'; //printing the thing in the namespace
    std::cout << secondNamespace::x << '\n';

    using namespace thirdNamespace; //if i don't want to use the resolution operator, i can use this

    std::cout << value << '\n'; //because the namespace is implied that i will use things from there, i don't need the resolution operator

    //i can do it with the std namespace too:

    /*
    using namespace std;
    cout << "With this i can save typing";
    */
    
    //if i just want to use a specific element of a namespace, like the std namespace i can do:

    using std::cout;
    
    cout << "Nice cock";

    std::string stringName = "this is an example string"; //because i didn't specified to use the string class, it won't import the string class automatically

    return 0;
}
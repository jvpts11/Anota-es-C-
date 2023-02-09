/*

hey man, looking to learn a little of c++?, these files will help you. Here i tried to put every single thing that i can make
an example of

the c++ syntax works very similar to the C syntax, but with differences that you will see

*/

#include <iostream> //any c++ program start here like a C program, in this case i'm including the iostream lib which handles the 
//io in c++

/*

this is the main method, here you build your program, call your functions and everything to run it

*/
int main() {

    //Comment Example

    //this bellow is the hello world statement of c++
    std::cout << "Hello World!" << std::endl;
    // the (std) stands to standard library, then i use the scope resolution operator (::) to access the cout function
    // this operator is explained better in the namespaces section
    // then i use the insertion operator (<<) to put the string at the standard io, it is better explained in the user input section
    // then i just type my string usint the (" ") marks and then use a semicolon to close the statement
    // the hello world would end there but since i have another print statement bellow, i use the std::endl function to separate lines
    // with this i can avoid using the \n thing of C, i can use it but C is not a gigachad language

    std::cout << "C++ it's really nice!" << std::endl;
    return 0;
}
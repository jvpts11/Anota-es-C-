#include <iostream>

// the ternary operator <condition> ? <expression1> : <expression2> is another alternative for if statement and just fit in one line
// the expression1 is if the condition is met, the expression2 is where the condition is not met
// an example of the ternary operator:

int main()
{
    int age;

    std::cout << "Enter your age";
    std::cin >> age;

    age >= 18 ? std::cout << "You can watch pornhub" : std::cout << "You can't watch pornhub"; //this have the same effect of the if

    //alternatively you can write it as:

    /*
    
    age >= 18 ? 
        std::cout << "You can watch pornhub" : 
        std::cout << "you can't watch pornhub"; it works the same too

        you can nest the ternary operator too:

        <condition> ? 
            <expression1> : 
            <condition> ? <expression1> : <expression2>;
    
    */

    return 0;
}
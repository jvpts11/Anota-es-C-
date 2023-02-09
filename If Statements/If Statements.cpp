#include <iostream>

//the if statement works just like every if statement, if something is true, do it, then if not, don't do

/*

if statements use comparison operators in order to do something:

<= >= < >

if i want to compare something that is equal to something, i can use the == operator, this operator check if something is equals

*/

int main()
{

    int age;

    std::cout << "Enter your age";
    std::cin >> age;

    if (age >= 18 ) { //first condition
        std::cout << "Congrats, you can be arrested or watch pornhub if you want";
    }
    else if (age > 18) { //if the first condition is not met, it will jump to the else if and to another check
        std::cout << "You can watch pornhub or be arrested";
    }
    else { //if nothing that i defined is true, then it will enter in the else
        std::cout << "You can't be arrested neither watch pornhub lmao";
    }

    /*
    but keep in mind that if you need to make multiple simultaneous checks you shouldn't use else if because
    if something in an else if above is true, it won't check the other else if below it, so, if i want to check a character speed in a game:

    if(character_speed == 40{
        do something
    } else if(character_speed >= 40){
        do something
    }
    else if(character_speed >= 80){ this else if won't be checked because the condition of the else if above is met
        do something
    }

    instead, i can do this:

    if(character_speed == 40){
        do something
    }
    else if(character_speed >= 40) {
        do something
    }

    if(character_speed >= 80){ this will be checked because it isn't inside that if statement,
        do something             so the program will first run the first if statement then will
                                 run the if statement bellow, which is what we want in this case.
    }
    */

    return 0;
}
#include <iostream>
#include <ctime>

/*

this is an example of a simple random event generator in c++

*/

int main()
{
    srand(time(0));

    int eventNum = (rand() % 5) + 1; //we gonna have 5 random events

    switch (eventNum) {
        case 1:
            std::cout << "this is the shitass event!";
            break;
        case 2:
            std::cout << "this is the porn event!";
            break;
        case 3:
            std::cout << "this is the coffee addiction event!";
            break;
        case 4:
            std::cout << "this is the simping event!";
            break;
        case 5:
            std::cout << "this is the idk i'm out of funny ideas for funny event names lol event!";
            break;
    }

    return 0;
}
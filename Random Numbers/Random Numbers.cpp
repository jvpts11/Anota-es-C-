#include <iostream>
#include <ctime>

/*

like in C you can generate random numbers if you need:

*/

int main()
{

    srand(time(NULL));
    int num = rand(); //this will generate a random number

    int dice = (rand() % 6) + 1; //if i want to randomize a dice

    std::cout << num;

    return 0;
}
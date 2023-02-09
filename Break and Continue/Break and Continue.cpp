#include <iostream>

/*

sometimes we want to get out of a loop or continue on it, for this we have the keywords:

break - stop a loop

continue - stop the current iteration

ex:
*/

int main()
{

    for (int i = 0; i <= 20; i++) {
        if (i == 13) { // if the i reach 13, it will stop this loop and continues the program excecution
            break;
            //continue; this would stop the current iteration of the loop and don't print the number 13
        }
        std::cout << i << std::endl;
    }
    return 0;
}

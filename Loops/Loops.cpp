#include <iostream>

/*

A loop is an structure that repeat code, there is some types of it: while(), do while() and for() loops

here is some examples:
*/

int main()
{

    int i = 5,j = 5,k = 5;

    while (i > 0) { //first i need to put a condition inside the while loop
        std::cout << i << std::endl; //then i will print the variable then break one line
        i--; //then i will decrement the variable by one, if i don't do it, this loop will run infinitely
    }

    /*
    
    i can also make a infinite loop like this:

    while(true){
        this thing will run forever unless the program stops
    }
    
    */

    //the do while loop works similar but it first excecute the code, then check if the given condition is met
    do {
        std::cout << "this is the do while loop" << std::endl;
        j--;
    } while (j > 0);

    //the for loop is some sort of while loop but condensed and which can be handled more easy

    for (k; k > 0; k--) { //first i insert an starting value, then i insert an boolean condition, then i insert how much it needs to be incremented or decremented
        std::cout << "this is the for loop" << std::endl;
    }

    for (int l = 0; l < 10; l += 3) { //i can do this type of thing too
        std::cout << l << std::endl;
    }

    /*
    
    you can also nest loops inside loops like if's:

    loop(){

        loop(){

        }
    }
    
    */

    return 0;
}
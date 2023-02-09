#include <iostream>

/*
    the switch statement is an better performing alternative when you have a lot of if and else if statements
    the reason for this is that when the program is compiled, it create a jump table for the switch, it means
    that if something is true inside the switch, the program will immediately excecute what matches or not matches
    things in the switch statement
    in practice, it is the same switch statement in C
    it will compare one value againist other mathing cases, it is useful in situtations like this:
*/

int main()
{
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;
    /*
    
    this is inefficient, and terrible to performance because the compiler needs to pass through all fo these
    different conditions and find one that matches or if nothing matches

    if (month == 1) {
        std::cout << "It's january";
    }
    else if (month == 2) {
        std::cout << "It's february";
    }
    else if (month == 3) {
        std::cout << "It's march";
    }
    else if (month == 4) {
        std::cout << "It's april";
    }
    else if (month == 5) {
        std::cout << "It's may";
    }
    else if (month == 6) {
        std::cout << "It's june";
    }
    else if (month == 7) {
        std::cout << "It's july";
    }
    else if (month == 8) {
        std::cout << "It's august";
    }
    else if (month == 9) {
        std::cout << "It's september";
    }
    else if (month == 10) {
        std::cout << "It's october";
    }
    else if (month == 11) {
        std::cout << "It's november";
    }
    else if (month == 12) {
        std::cout << "It's december";
    }
    else{
        std::cout << "This isn't a valid month number";
    }

    instead, we could do this more efficient and better performing using switches:

    */

    switch (month) { //in contrast with if, the argument of switch will be the variable to compare
        case 1: //in this field called case, we need to put a value that it will compare and if it's true, it will excetute the code, the value needs to match the data type of the variable
            std::cout << "It's january";
            break; //we need to put break because if not, it will excecute this infinitely
        case 2:
            std::cout << "It's february";
            break;
        case 3:
            std::cout << "It's march";
            break;
        case 4:
            std::cout << "It's april";
            break;
        case 5:
            std::cout << "It's may";
            break;
        case 6:
            std::cout << "It's june";
            break;
        case 7:
            std::cout << "It's july";
            break;
        case 8:
            std::cout << "It's august";
            break;
        case 9:
            std::cout << "It's september";
            break;
        case 10:
            std::cout << "It's october";
            break;
        case 11:
            std::cout << "It's november";
            break;
        case 12:
            std::cout << "It's december";
            break;
        default: //the default is where it will excecute if nothing match one of the cases
            std::cout << "This is not a valid month";
            break;
    }
    return 0;
}
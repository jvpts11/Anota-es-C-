#include <iostream>

/*

Enums work just like they work in any other language, they are a user defined data type
that consists of paired named-integer constants

*/

//declaration of a enum
enum Day{
    sunday, //the members of the enum have an index, which starts with 0 for the first member
    monday,
    tuesday,
    wednesday_adams,
    thursday,
    friday,
    saturday
};

int main()
{
    
    Day today = sunday;

    switch (today) {
        case sunday:
            std::cout << "it's sunday!";
            break;
        case monday:
            std::cout << "it's monday!";
            break;
        case tuesday:
            std::cout << "it's tuesday!";
            break;
        case wednesday_adams:
            std::cout << "it's wednesday_adams!";
            break;
        case thursday:
            std::cout << "it's thursday!";
            break;
        case friday:
            std::cout << "it's friday!";
            break;
        case saturday:
            std::cout << "it's saturday!";
            break;
        default:
            std::cout << "it's not a valid day";
            break;
    }

    return 0;
}
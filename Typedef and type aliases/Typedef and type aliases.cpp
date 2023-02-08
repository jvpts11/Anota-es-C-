#include <iostream>
#include <vector>

//if i have something that i want to give it an alias, i can do it using the typedef keyword
//suppose i have the following thing:

std::vector<std::pair<std::string, int>>; //this is scary and very long to read and undestand no?

//what i can do is give it an alias, in the following way:

typedef std::vector<std::pair<std::string, int>> pairlist_t; //when i declare a typedef, normally for convention use an _t at the end of this type

//i can do it with pretty much any data type:

typedef int número;

//AMOGUS

typedef std::string amogus;

//alternatively, typedef was replaced with the using keyword but it still there if you want to use it like this, here is an example of using:

using trueOrFalse = bool; //this is preferrable because it works better with templates, but if you won't do templates, then typedef is still a viable choice

int main()
{
    std::vector<std::pair<std::string, int>> pairlistVariable; //now instead of doing this hell, i can do just:

    pairlist_t pairlist;

    número um_número= 1;

    amogus crewmate = "Red";

    std::cout << crewmate << " is SUS";

    return 0;
}

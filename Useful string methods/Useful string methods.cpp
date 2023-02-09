#include <iostream>
#include <string>

/*
unlike the painful C and his not good usage of some things, C++ have strings
and like every gigachad language (object oriented), it has string methods, that can convert data into literal strings
like we do in java or c# or other NORMAL LANGUAGE
*/

int main()
{
    std::string name;
    int string_length, char_pos, char_pos_2;
    bool string_empty;

    std::cout << "Enter your name";
    std::getline(std::cin ,name); //the getline method is able to get a string with spaces

    string_length = name.length(); //the length method return the length of the string as an integer

    string_empty = name.empty(); //the empty method returns a boolean if a string is empty or not

    name.append(", the shitass"); //the append method will 

    char_pos = name.at(0); //the at method will return a character giving it's position in the string, in this case it will return
    //the first character of the string

    char_pos_2 = name.find(' '); //the find method will search for the first character that matches it's input and return it's index pos.

    name.erase(4,8); //the erase method will remove the portion of string giving the beginning index and the ending index to remove

    name.clear(); //the clear method will clear the string


    // if you want to see more, go to the c++ website in strings: https://cplusplus.com/reference/string/string/
    return 0;
}
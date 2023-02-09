#include <iostream>

/*

Passing by value or by reference just means that we can pass something by it's own value in a function parameter
or we can pass the reference of that value in the function
it is useful when we need to manipulate a value that if we don't do it, we will end with a copy of that value

it is better illustrated in this example:

*/

using std::string; using std::cout;

void swap(string& a, string& b);

int main()
{
    string a = "Richard";
    string b = "The Shitass";

    swap(a, b);

    cout << a << ' ';
    cout << b ;

    return 0;
}


void swap(string &a, string &b) { //if i wasn't passing the memory address here, it wouldn't be swapping in the main function
    string temp = a;
    a = b;
    b = temp;
}
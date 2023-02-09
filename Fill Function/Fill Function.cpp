#include <iostream>

/*

The fill function is a useful function to fill arrays, it is written like this:

fill(begin, end, value_to_be_filled);

the following example will fill an string array with pizza, then print all of it:

*/


int main()
{
    using std::string;
    using std::cout;

    string foods[100];

    fill(foods, foods + 100, "pizza");

    for (string food : foods) {
        cout << food << '\n';
    }

    //now a little challenge, fill the 1/3 of food with go, then fuck then it:

    const int SIZE = 100;

    string shit[SIZE];

    fill(shit, shit + (SIZE / 3), "go");
    fill(shit + (SIZE / 3), shit + (SIZE / 3) * 2,"fuck");
    fill(shit + (SIZE / 3) *2, shit + SIZE, "it");

    for (string shits : shit) {
        cout << shits << '\n';
    }

    return 0;
}
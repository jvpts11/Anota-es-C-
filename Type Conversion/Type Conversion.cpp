#include <iostream>

int main()
{
    //you can convert data types in an implicit or explicit like C:

    int x = 3.14; //it will convert this into an integer and just retain the integer part

    //but if i want to have a double, then convert it to an int?, do this:

    double pi = (int) 3.14; //i'm explicitly saying that this thing needs to be an integer

    std::cout << x <<'\n';

    std::cout << pi << '\n';

    //Like in C you can cast int into a char implicitly or explicitly:

    char c = 100; // implicit cast

    std::cout << c << '\n';

    std::cout << (char)100 << '\n'; //explicit cast

    //a little algorithm now to calculate a score in a test using casts:

    int correct = 8, questions = 10; //yes i can do it
    double score = (correct / (double)questions) * 100; //if i didn't had the cast, the result would appear 0

    std::cout << score << "%";

    return 0;
}
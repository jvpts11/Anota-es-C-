#include <iostream>
#include <cmath>

// you can always find other math functions in the link: https://cplusplus.com/reference/cmath/

int main()
{
    double pi = 3.14;
    double x = 3;
    double y = 4;
    double z,a,b,c,d,e,f,g;

    z = std::max(x, y); //find max value between two numbers
    a = std::min(x,y); //the inverse of max
    b = pow(2,3); //will make the power of a first number by the second number
    c = sqrt(9); //square root of number
    d = abs(-32); //will return a modulus of a number
    e = round(pi); //will round a number
    f = ceil(pi); //will always round up
    g = floor(pi); //will always round down

    std::cout << z << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';
    std::cout << f << '\n';
    std::cout << g << '\n';
    
    return 0;
}
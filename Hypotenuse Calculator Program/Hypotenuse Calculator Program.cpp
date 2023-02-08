#include <iostream>
#include <cmath>

//this is a simple program with the face of c++

//this namespace only have things related to math that i can use more easely
namespace mathThings {

    float power(double a, double b) {
        return pow(a, b);
    }

    float squareRoot(double a, double b) {
        return sqrt(a + b);
    }
}

//this namespace just have methods and variables to use
namespace methods {

    double a;
    double b;

    void operate() {
        std::cout << "Enter your triangle values: \n";

        std::cout << "Side A: \n";
        std::cin >> a;

        std::cout << "Side B: \n";
        std::cin >> b;
    }
}

//this function calculate the hypotenuse itself but passing a function as parameter
float hypotenuse(double a, double b, float (*func)(double a, double b)) { //you can pass functions as parameters too
    float x, y, z;
    x = func(a, 2);
    y = func(a, 2);

    z = mathThings::squareRoot(x, y);
    return z;
}

//this function calculate the hypotenuse itself
float hypotenuse(double a, double b) {
    float c;

    a = mathThings::power(a, 2);
    b = mathThings::power(b, 2);

    c = mathThings::squareRoot(a, b);

    return c;
}

int main()
{
    using mathThings::power;

    double result;
    methods::operate();
    //result = hypotenuse(methods::a,methods::b);
    result = hypotenuse(methods::a, methods::b, &power); //here i'm passing the address of the power function as argument
    std::cout << result << '\n';

    return 0;
}
#include <iostream>

int main()
{
    const double PI = 3.14159; //is good declaring constant names in uppercase
    // PI = 6.123; won't compile
    double radius = 10;
    double circumference = 2 * PI * radius;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << circumference << "cm";

    return 0;
}

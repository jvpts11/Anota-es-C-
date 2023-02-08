#include <iostream>

int main()
{

    int x; //declaration
    x = 5; // Atribution
    int y = 6;
    int sum = x + y;

    //Data types:

    //Int : integer, ex:

    int age = 20;
    int year = 2023;
    int days = 7;

    //double: floating point with double precision than float ex:

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //char: single characters

    char grade = 'A';
    char initial = 'B';

    //booleans

    bool isStudent = false;
    bool isPowered = true;

    //strings

    std::string randomString = "YEAH BITCH, MAGNETS";
    std::string name = "Ricardo Lopes";


    // displaying variables:
    std::cout << x << '\n'; //É possível adicionar um \n assim também: std::cout << x + '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " Years Old" << '\n';

    return 0;
}
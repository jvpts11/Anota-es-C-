#include <iostream>

/*

Constructors are special methods that will be evoked every time that you create a new object or instance whatever you call it
constructors are important because with them you can send data to an object and perform useful things that you want

*/

class Student {
    public:
        std::string name;
        int age;
        double gpa;

        Student(std::string name, int age, double gpa) { //to declare a constructor, simply type the name of the class then (), by default constructors are public
            this->name = name;
            this->age = age; //assingment of the values, the this keyword is used when something in a class have the same name of other thing
            this->gpa = gpa;
        }
};

class Pizza {
    public:
        std::string topping1;
        std::string topping2;
        Pizza() {//if you don't need to pass arguments to the constructor, you can just add a constructor with no arguments

        }
        Pizza(std::string topping1) {
            this->topping1 = topping1;
        }
        Pizza(std::string topping1 ,std::string topping2) { // if is needed you can overload constructors
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
};

int main()
{

    Student studentOne("Richard",20,3.2);

    std::cout << studentOne.name << '\n';
    std::cout << studentOne.age << '\n';
    std::cout << studentOne.gpa << '\n';

    Pizza pizza1("Mushroom");
    Pizza pizza2("Mushroom","Pepperoni");

    return 0;
}
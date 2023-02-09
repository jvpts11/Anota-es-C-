#include <iostream>

/*

Inheritance is an useful thing when we need to a class know what other class have inside of it

when a class inherit things from other class, it can access their public things

example:

*/

class Animal {
    public:
        bool isAlive = true;
        void eat() {
            std::cout << "The animal is eating" << '\n';
        }
};

class Dog : public Animal { //that's how we declare an inheritance
    public:
        void bark() {
            std::cout << "woof" << '\n';
        }
};

class Cat : public Animal {
    public:
        void meow() {
            std::cout << "meow" << '\n';
        }
};

int main()
{
    Dog brutus;
    Cat canapu;

    std::cout << canapu.isAlive << '\n';
    canapu.eat();
    canapu.meow(); //in the end, inheritance help us to save code and have things more reuseable

    return 0;
}
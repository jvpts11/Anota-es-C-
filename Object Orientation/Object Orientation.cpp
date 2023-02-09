#include <iostream>

/*

Here is where C++ completely outshine the midget C language and tons of other languages due to it's speed in this part
here is also when you see that C is shit and not that good and this is the ultimate OOP language

Object orientated programming is when we program things with objects
an object in programming is like an real life object, it have attributes, it can do things

translating it to programming, it means that an object have variables, have methods, functions, structs and every other thing
in C we have some sort of this with structs but they just don't work the same and are pretty limited in this type of task

that's why i hate C so much

Object Oriented Programming brings to us somethings we need to know like classes, access specifiers and other things that make
it so nice, cool and save A LOT of neurons when programming

a class is like an blueprint of the object, inside it is where i have the parameters and methods associated with that object

so, to do it:
*/

class Human { //by convention, class names needs to have the first letter as uppercase
    public: //don't care about this now
        std::string name;
        std::string occupation;
        int age;

        void eat() {
            std::cout << "i'm eating!";
        }
        void drink() {
            std::cout << "i'm eating!";
        }
        void sleeping() {
            std::cout << "i'm sleeping and somehow i said this";
        }
        void simp() {
            std::cout << "i'm simping someone";
        }
        void fuck() {
            std::cout << "oh yeah i'm fucking";
        }
};

int main()
{
    Human person;
    person.name = "Rick";
    person.occupation = "Scientist";
    person.age = 70;

    //i could print these things to display it but at this point you know how to do it right?

    //what if i want to the person perform some action? simple:
    person.drink(); //he will drink like in the series? well, supposedly yes
    person.sleeping(); //go sleep rick

    //what if i need another human? like morty? i can do it too:

    Human person2;
    person2.name = "Morty";
    person2.occupation = "Student";
    person2.age = 15;

    person2.simp();
    person2.sleeping();

    //thanks to object orientation, i could reuse code for both the humans and now u just invoke the methods! nice no?

    return 0;
}
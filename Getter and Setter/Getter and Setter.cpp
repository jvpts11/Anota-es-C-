#include <iostream>

/*

C++ have access modifiers: public and private, if something is private we can't access that thing directly, instead we can use
an getter, if we need to change that attribute, we can use a setter, lemme demonstrate here:

*/

class Stove {
    private:
        int temperature = 0;
    public:
        int getTemperature() { //getter
            return temperature;
        }
        void setTemperature(int a) { //setter
            temperature = a;
        }
};

int main()
{
    Stove stove;

    stove.setTemperature(100000); //this way i can modify that value even if it is private, with this i can control what the
    //classes have access for it, let's now print it:

    std::cout << stove.getTemperature(); //getters and setters are useful

    return 0;
}
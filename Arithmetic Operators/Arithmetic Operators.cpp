#include <iostream>

//they are used to perform arithemtic operators like add, sum, divide and multiply (+, -, /, *)

int main()
{
    int students = 20;
    int apples = 20;
    int computers = 20;
    int woodPlanks = 20;
    int bullets = 20;

    students = students + 1; //sum operation

    std::cout << students << '\n';

    //alternativelly this would make the same thing:
    // students += 1;
    //or even you can do: students++;

    //now subtraction:

    apples = apples - 1;

    std::cout << apples << '\n';

    //alternatively you can do:
    // apples -= 1;
    // or even: apples--;

    //now multiply:

    computers = computers * 2;
    
    std::cout << computers << '\n';

    //alternatively you can do:
    // computers *= 2;

    //and finally divide:

    woodPlanks = woodPlanks / 2;

    std::cout << woodPlanks << '\n';

    //the alternative is:
    // woodPlanks /= 2;

    //if i divide computers by 3, it won't store the decimal part, so i will cast this variable or change the data type
    //if i need to store the remainder of an operation like an 20 / 3, i can use the modulus operator '%'

    int remainder = bullets % 3;

    std::cout << remainder;

    //if i have an formula or something like it, i can do it like:

    int base = 4;
    int height = 3;
    int triangleArea = (base * height) / 2; //because i need to divide the base and height both by 2, i can use the parenthesis to precede or postcede and operation

    //like C, C++ will use the arithmetic operator order to calculate things like real math

    return 0;
}
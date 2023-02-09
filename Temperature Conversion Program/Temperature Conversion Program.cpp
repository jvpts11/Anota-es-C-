#include <iostream>
#include <cmath>

/*
this is a temperature conversion program with the face of c++
*/


/*
in this namespace i store everything to handle maths
*/
namespace math {
    
    /*
    in this namespace i store everything related to fahrenheit conversion
    */
    namespace fahrenheit {

        const float fahrenheit_constant = 1.8;
        const float fahrenheit_water_freezing_point = 32;

        float convert_to_fahrenheit(int celcius_temp) {
            float temp;
            (float)celcius_temp;
            return temp = (fahrenheit_constant * celcius_temp) + fahrenheit_water_freezing_point;
        }
        float convert_to_fahrenheit(double celcius_temp) {
            float temp;
            (float)celcius_temp;
            return temp = (fahrenheit_constant * celcius_temp) + fahrenheit_water_freezing_point;
        }
        float convert_to_fahrenheit(float celcius_temp) {
            float temp;
            return temp = (fahrenheit_constant * celcius_temp) + fahrenheit_water_freezing_point;
        }
    }

    /*
    in this namespace i store everything to handle kelvin conversion
    */
    namespace kelvin {
        const float kelvin_constant = 273.15;

        float converto_to_kelvin(int celcius_temp) {
            float temp;
            (float)celcius_temp;
            return temp = celcius_temp + kelvin_constant;
        }

        float convert_to_kelvin(double celcius_temp) {
            float temp;
            (float)celcius_temp;
            return temp = celcius_temp + kelvin_constant;
        }

        float convert_to_kelvin(float celcius_temp) {
            float temp;
            return temp = celcius_temp + kelvin_constant;
        }
    }
    
}

/*
in this namespace i store everything that is just methods and things like this
*/
namespace methods {
    char result;
    double temp, result_to_print;

    void print_menu() {
        std::string menu = "*************Temperature Converter 2000*************\n*                  F - Fahrenheit                  *\n*                    K - Kelvin                    *\n*      What unit would you like to convert to?     *\n****************************************************\n";
        std::cout << menu;
    }

    void perform_input_temperature_type() {
        std::cin >> result;
    }

    void perform_input_temperature_value() {
        std::cout << "Enter the temperature: \n";
        std::cin >> temp;
    }

    void evaluate() {
        switch (result) {
            case 'f':
                result_to_print = math::fahrenheit::convert_to_fahrenheit(temp);
                break;
            case 'F':
                result_to_print = math::fahrenheit::convert_to_fahrenheit(temp);
                break;
            case 'k':
                result_to_print = math::kelvin::converto_to_kelvin(temp);
                break;
            case 'K':
                result_to_print = math::kelvin::converto_to_kelvin(temp);
                break;
        }
    }

    void print_result() {
        if (result == 'f') {
            std::cout << "Your temperature in Fahrenheit is: " << result_to_print;
        }
        else if (result == 'F') {
            std::cout << "Your temperature in Fahrenheit is: " << result_to_print;
        }
        else if (result == 'k') {
            std::cout << "Your temperature in Kelvin is: " << result_to_print;
        }
        else if (result == 'K') {
            std::cout << "Your temperature in Kelvin is: " << result_to_print;
        }
    }

}

int main()
{
    methods::print_menu();
    methods::perform_input_temperature_type();
    methods::perform_input_temperature_value();
    methods::evaluate();
    methods::print_result();
    return 0;
}
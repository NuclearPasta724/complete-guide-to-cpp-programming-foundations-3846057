// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    std::cout << typeid(static_cast<double>(static_cast<double>(fahrenheit) - 32.0)).name() << std::endl;


    celsius = static_cast<double>((static_cast<double>(fahrenheit) - 32.0) * (5.0 / 9.0));

    std::cout << typeid(celsius).name() << std::endl;


    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    double weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << static_cast<int>((weight - static_cast<int>(weight)) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

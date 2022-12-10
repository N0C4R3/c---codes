#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "**** temp conversion ****" << std::endl;
    std::cout << "F = fahrenheit\n";
    std::cout << "C = celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temp in celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "temperature: " << temp << "F" << std::endl;

    } else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temp in fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "temperature: " << temp << "C" << std::endl;
    } else {
        std::cout << "please only enter c or f\n";
    }


    std::cout << "*************************";


    return 0;
}
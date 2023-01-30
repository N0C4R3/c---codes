#include <iostream>

//object = collection of attributes and methods

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "you step on the gas!\n";
        }
        void brake(){
            std::cout << "you step on the brakes\n";
        }

};

int main(){

    Car car1;
    car1.make = "ford";
    car1.model = "MUSTANG";
    car1.year = 2021;
    car1.color = "blue";
    
    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.color << std::endl;

    car1.accelerate();
    car1.brake();

    return 0;
}
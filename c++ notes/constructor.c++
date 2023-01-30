#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car{
    public:
        std::string make;
        std::string model;
        std::string color;
        int year;

    Car(std::string make, std::string model, std::string color, int year){
        this->make = make;
        this->model = model;
        this->color = color;
        this->year = year;
    }
};

int main(){
    // constructor = special method that auto assign value to atributes as argument
    Student student1("Sam", 17, 4.2);
    Student student2("pat", 14, 1.4);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.age << std::endl;
    std::cout << student2.gpa << std::endl;

    Car car1("chevy", "corvet", "blue", 2022);

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.color << '\n';
    std::cout << car1.year << '\n';


    return 0;
}
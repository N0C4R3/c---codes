#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "this animal is eating" << std::endl;
    }
};
class Dog : public Animal{
    public:

    void bark(){
        std::cout << "this dog barks" << std::endl;
    }

};
class Cat : public Animal{
    public:

    void meow(){
        std::cout << "the cat meows" << std::endl;
    }
};

//------------------

class Shape{
    public:
        double area;
        double volume;

};
class Cube : public Shape{
    public:
        double side;
        Cube(double side){
            this->side = side;
            this->area = side * side * 6;
            this->volume = side * side * side;
        }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main(){

    Dog dog;
    Cat cat;

    std::cout << dog.alive << std::endl;
    dog.eat();
    dog.bark();
    cat.meow();

    //_-------
    Cube cube(10);
    Sphere sphere(5);
    std::cout << "area: " << cube.area << "cm\n";
    std::cout << "volume: " << cube.volume << "cm\n";

    std::cout << "area: " << sphere.area << "cm\n";
    std::cout << "volume: " << sphere.volume << "cm\n";
    return 0;
}
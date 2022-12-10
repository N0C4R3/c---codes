#include <iostream>;




int main(){
    //int = num
    int age = 17;
    int year = 2023;
    int days = 7;

    //DOUBLE = FLOAT =
    double price = 10.99;

    std::cout << price << '\n';

    //char = single character
    char grade = 'A';
    char initial = 'B';

    std::cout << grade << '\n';


    //boolean 
    bool student = false;
    bool power = true;
    bool forSale = false;
    
    std::cout << student << '\n';

    //string
    std::string name = "JT";
    std::string food = "pizza";
    std::string day = "12/7/2022";
    std::cout << name << '\n';
    std::cout << day << '\n';

    std::cout << "hello " << name << " today is " << day << " you are " << age << " years old." << '\n';

    //constant const with UPPERCASE letters
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << '\n';

    const int LIGHT_SPEED = 299792458;

  

    return 0;
}
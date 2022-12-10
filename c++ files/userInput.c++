#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
    std::string name;
    int age;

    std::cout << "Whats your age: ";
    std::cin >> age; //invisible \n

    std::cout << "whats your name: ";
    //std::cin >> name; doesnt work with spaces
    std::getline(std::cin >> std::ws, name); // 
    //                       /\ for the \n in line 11



    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}
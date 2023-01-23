#include <iostream>

// struct = a structure that group related vars under one name can contain different data types
// vars in struct are known as members

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main(){

    student student1;
    student1.name = "spongebob";
    student1.gpa = 3.2;
    

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.0;
    

    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << student2.enrolled << std::endl;

    return 0;
}
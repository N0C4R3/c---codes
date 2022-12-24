#include <iostream>

int main(){
 // pointers = variable thats stores a memory of another variable locations
 //             easier to work with addresses

 // & addres-of operator
 // * dereference operator

    std::string name = "jt";
    int age = 21;
    std::string *pName = &name;
    int *pAge = &age;
    std::cout << *pName;
    std::cout << *pAge;
    return 0;
}
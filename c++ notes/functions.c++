#include <iostream>
//must be declared before main but can be written under main to look better
void happyBirthday(std::string name, int age);
int main(){

    std::string name = "jt";
    int age = 17;
    happyBirthday(name, age);





    return 0;
}

//functions can have same name if parameter are different

void happyBirthday(std::string name, int age){
    std::cout << "Happy birthday to you\n";
    std::cout << "Happy birthday to you\n";
    std::cout << "Happy birthday dear " << name << '\n';
    std::cout << "Happy birthday to you\n";
    std::cout << "Happy birthday you are now " << age << " yaers old" << '\n';
}

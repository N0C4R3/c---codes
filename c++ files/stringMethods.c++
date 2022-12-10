#include <iostream>

int main(){

    std::string name;

    std::cout << "Name: " ;
    std::getline(std::cin, name);

    //if(name.length() > 12){
    //    std::cout << "name too long";
    //}else{
    //    std::cout << "welcome " << name;
    //}

    // empty checks for bollean like if name is ther or not
    //name.empty() ? std::cout << "you didnt enter your name" : std::cout << "hello " << name;

    //name.clear();     removes value of name
    //std::cout << "hello " << name;

    //name.append("@gmail.com");
    //std::cout << "your username is " << name;

    //std::cout << name.at(0); //displays char at the chosen position 0-whatever

    //name.insert(0, "@"); inserts value at position (pos, "value")
    //std::cout << name;

    //std::cout << name.find(' '); returns postiton in string of find this case white space

    //name.erase(0, 3); removes values from (starting, to end (but not including last))
    //std::cout << name;

    return 0;
}
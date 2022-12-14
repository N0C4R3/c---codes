#include <iostream>

//ternary operator ?: is a replacment for if/else statements
// condition ? expresion1 : expresion2


int main(){

    int grade = 50;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!\n";      

    int num = 8;

    num % 2 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    bool hungry = true;
    //hungry ? std::cout << "you are hungry\n" : std::cout << "you are full\n";
    std::cout << (hungry ?  "you are hungry\n" : "you are full\n");


    return 0;
}
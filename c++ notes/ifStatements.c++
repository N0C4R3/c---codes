#include <iostream>

int main(){

    int age;
    std::cout << "Age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "you are adult";
    } else if(age < 0) {
        std::cout << "you are lying";
    } 
    else{
        std::cout << "you are to young";
    }

    //switchs do the same but with less typing
    int month;
    std::cout << "enter month (1-12)";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "it is january";
            break;  
    }


    return 0;
}
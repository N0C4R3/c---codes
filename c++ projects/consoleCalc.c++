#include <iostream>

int main(){


    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** calculator **********" << '\n';

    std::cout << "enter either ( + - * /): ";
    std::cin >> op;

    std::cout << "enter num1: ";
    std::cin >> num1;

    std::cout << "enter num2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "invalid operator please use (+ - / *)";
            break;
    }

    std::cout << result << std::endl;

    std::cout << "********************************";
    return 0;
}
#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1:
            std::cout << "you win a sticker!\n";
            break;
        case 2:
            std::cout << "you win a t-shirt!\n";
            break;
        case 3:
            std::cout << "you win a free lunch!\n";
            break;
        case 4:
            std::cout << "you win a ipad!\n";
            break;
        case 5:
            std::cout << "you win a car!\n";
            break;
    }



    return 0;
}
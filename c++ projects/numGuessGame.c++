#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "******** num guess game **********" << std::endl;

    do{
        std::cout << "enter a guess between 1-100: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";

        } else if (guess < num){
            std::cout << "Too low!\n";
        } else{
            std::cout << "CORRECT! # of tries: " << tries << std::endl;
        }
    }while(guess != num);

    std::cout << "***********************************";

    return 0;
}
#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock=Paper-scissors Game!\n";
    do{
        std::cout << "choose one of the following \n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    

    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }


    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "rock\n";
            break; 
        case 'p': std::cout << "paper\n"; 
            break;
        case 's': std::cout << "Scissors\n";
            break;              
    }
}
void chooseWinner(char player, char computer){
    if(player == computer){
        std::cout << "its a tie!\n";
    } else if(player == 'r' && computer == 's' || player == 's' && computer == 'p' || player == 'p' && computer == 'r'){
        std::cout << "Player wins!\n";
    } else {
        std::cout << "computer wins!\n";
    }

}
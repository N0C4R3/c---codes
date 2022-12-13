#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposite();
double withdraw(double balance);

int main(){
    double balance = 123;
    int choice = 0;

    do{
        std::cout << "********************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "********************\n";
        std::cout << "1. show balance\n";
        std::cout << "2. depostie money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. exit\n";
        std::cin >> choice;

        //prevents program from going crazy if u want ex comment it out
        std::cin.clear();
        fflush(stdin);
        //

        switch (choice)
        {
        case 1: showBalance(balance);
                break;
        case 2: balance += deposite();
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4: std::cout << "Thanks for visiting!\n"; 
                break;

        default: std::cout << "invalid choice";
            break;
        }
    } while(choice != 4);



    return 0;
}


void showBalance(double balance){
    std::cout << "your balance is: $"<< std::setprecision(2) << std::fixed << balance << '\n' ;
}

double deposite(){
    double amount = 0;

    std::cout << "Enter amount to deposite: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    } else {
        std::cout << "unvalid amount\n";
    }
}

double withdraw(double balance){
    double amount = 0;

    std::cout << "enter amount to withdraw: ";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    } else if (amount < 0){
        std::cout << "thats not a valid amount\n";
        return 0;
    } else {
        return amount;
    }
    
        


    return amount;
}

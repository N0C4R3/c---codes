#include <iostream>
#include <ctime>

// pseudo random very close but not fully

int main(){
    //seed for random number generator uses todays date
    srand(time(NULL));

    int num = (rand() % 20) + 1;

    std::cout << num;

    return 0;
}
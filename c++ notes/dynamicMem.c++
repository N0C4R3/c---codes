#include <iostream>

// dynamic memory = memory that was added after program is compiled and running
// Uses the 'new' operator to allocate memory in the heap rather than the stack
// useful when we dont know how much memory will be needed.
// makes programs more flexible, especially when accepting user input

int main(){
    char * pGrades = NULL;
    int size;

    std::cout << "how many grades to enter: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
            }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}
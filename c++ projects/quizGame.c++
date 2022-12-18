#include <iostream>

int main(){
    std::string questions[] = {"1. what year was c++ created?: ",
                                "2. who invented c++?: ",
                                "3. what is the predecessor of c++?: ",
                                "4. is the earth flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                                {"A. C", "B. C+", "C--", "D. B++"},
                                {"A.yes", "B. no", "C. sometimes", "D. whats earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'}; 

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "***************************************\n";
        std::cout << questions[i] << std::endl;
        std::cout << "***************************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            std::cout << "correct\n";
            score++;

        } else{
            std::cout << "wrong\n";
            std::cout << "answer: " << answerKey[i] << '\n';
        }
    }                  
    std::cout << "***************************************\n";
    std::cout << "*              RESULTS                *\n";
    std::cout << "***************************************\n";
    std::cout << "Corecct guesses: " << score << '\n';
    std::cout << "# of questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";

    return 0;
}
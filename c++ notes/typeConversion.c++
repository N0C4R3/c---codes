#include <iostream>

//type conversion changes value of data type
// two types Implicit (automatic) and Explicit (Precede value with new type)

int main(){
   

    //impicit     \/
    //double x =  (int) 3.14;
    //std::cout <<  x; //displays 3

    //char x = 100; //converts to ascii
    //std::cout << x << '\n'; //returns d
    
    //std::cout << (char) 100; //returns d

    //how is used normally with test ex
    int correct = 8;
    int questions = 10;
    //question changes to a double to retain decimal value
    double score = correct/(double)questions * 100; //returns score of test as %

    std::cout << score << "%" << '\n'; 

    return 0;
}
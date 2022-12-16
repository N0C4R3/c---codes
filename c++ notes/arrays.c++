#include <iostream>

//arrays are list

int main(){
    /*
    std::string cars[] = {"corvette", "ferrari", "mustsang"}; //same data type

    std::string lane [3];
    lane[0] = "right";
    lane[1] = "middle";
    lane[2] = "left";

    cars[0] = "camerro"; //reasigns first value of car to 
    


    std::cout << cars[0] << std::endl; //prints camerro
    std::cout << cars[1] << std::endl; // prints corvette
    
    std::cout << lane[0] << std::endl; // prints right

    double prices[] = {5.00, 6.99, 2.50};

    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;


    //sizeof() = determins size of bytes of a var

    double gpa = 3.5;
    std::cout << sizeof(gpa) << " bytes\n"; //8 bytes

    std::string name = "james";
    std::cout << sizeof(name) << " bytes\n"; //24 bytes

    char grade = 'A';
    std::cout << sizeof(grade) << " bytes\n"; //1

    bool student = true;
    std::cout << sizeof(student) << " bytes\n"; //1

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::cout << sizeof(grades) << " bytes\n"; //5
    std::cout << sizeof(grades)/sizeof(char) << " elements\n"; //5 elements

    std::string students[] = {"patrick", "John", "squidward"};
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n"; // number of students in array
*/

    //iterate over array.
/*
    std::string studentss[] = {"patrick", "John", "squidward"};

    for (int i = 0; i < sizeof(studentss)/sizeof(std::string); i++) {
        std::cout << studentss[i] << '\n';
    }

    char grades[] = {'A', 'B', 'C', 'D'};

    for (int i = 0; i < sizeof(grades)/sizeof(std::string); i++) {
        std::cout << studentss[i] << '\n';
    }
*/

    //for each loops

    std::string studentss[] = {"patrick", "John", "squidward"};

    for(std::string student : studentss){
        std::cout << student << '\n';
    }

    int grades[] = {65, 77, 88};
    for(int grade : grades){
        std::cout << grade << '\n';
    }




    return 0;
}


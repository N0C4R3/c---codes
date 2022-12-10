#include <iostream>
#include <cmath>


int main(){

    //double x = 3.14;
    //double y = 4;
    //double z;

    //z = std::max(x, y); // return 4 the greater num
    //z = std::min(x, y); // return 3 the min num

    //z=pow(2, 3); // to the power of function
    //z = sqrt(9); // return 3 squar root

    //z = abs(-3); //returns absoulute value
    //z = round(x); //rounds value

    //z = ceil(x); //returns tound up of value
    //z = floor(x); //returns round down

    //std::cout << z << '\n';


    //hypotenuse calculate
    double a;
    double b;
    double c;

    std::cout << "enter side a: ";
    std::cin >> a;

    std::cout << "enter side b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "side C: " << c << '\n';
             
    return 0;
}
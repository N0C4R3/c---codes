#include <iostream>

namespace first {
    int x = 1;

}

namespace second {
    int x = 2;
}

int main(){
    using namespace first; // declares x from first name space
    using std::string;
    using std::cout; // skips std in other lines like 18

    std::cout << x << '\n'; // x from namespace one
    cout << second::x; // x from second name space

    return 0;
}
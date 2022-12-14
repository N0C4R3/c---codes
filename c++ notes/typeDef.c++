#include <iostream>
#include <vector>

// type defs reserve keywords used to create an additional name for another data type
// new identifier for an existing type helps with readability and reduces typos
// mostly been replaced by using keyword because it works better with templates


//typedef std::vector<std::pair<std::string, int>> pairlist_t;

//typedef std::string text_t;

//typedef int number_t;

//works same as \/ but using works better

using text_t = std::string;

using number_t = int;

int main(){

    text_t firstName = "JT";
    number_t age = 17;

    std::cout << firstName << " " << age << '\n';

    return 0;
}
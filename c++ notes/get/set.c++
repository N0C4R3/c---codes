#include <iostream>

//abstration = hiding unnecessary data from outside a class
//getter = func that makes a private attribute readable
//setter = func that makes a private attribute writable

class Stove{
    private:
        int temp = 0;
    public:
    Stove(int temp){
        setTemp(temp);
    }
    int getTemp(){
        return temp;
    }
    void setTemp(int temp){
        if(temp < 0){
            this->temp = 0;
        } else if(temp >= 10){
            this->temp = 10;
        } else{
            this->temp = temp;
        }
    }
};

int main(){

    Stove stove(0);

    stove.setTemp(10000000);

    std::cout << "the temp is: " << stove.getTemp() << std::endl;




    return 0;
}


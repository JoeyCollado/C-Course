#include <iostream>

int main(){
  
    //much like an if statement but we can repeat some codes

    std::string name;

    while(name.empty()){ //while this condition remains true, block of code will execute forever until it is false
        std::cout << "enter your name ";
        std::getline(std::cin, name);
    }
    std::cout << "hello " << name;

    return 0;
}
#include <iostream>

int main(){


    //
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //empty method

    if(name.empty()){
        std::cout << "you didn't enter your name";
    }
    else{
        std::cout << "Hello " << name;
        
    }

    return 0; 
}
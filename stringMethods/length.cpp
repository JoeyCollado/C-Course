#include <iostream>

int main(){


    //
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //length method
    //give you the length of a string

    if(name.length() > 12){
        std::cout << "your name can't be over 12 characters";
    }
    else{
        std::cout << "welcome " << name;
        
    }

    return 0; 
}
#include <iostream>

int main(){


    //
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //clear method

        name.clear(); //clear the value input

        std::cout << "Hello " << name;
        
   

    return 0; 
}
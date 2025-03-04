#include <iostream>

int main(){


    //
    std::string name; //createing a string variable

    std::cout << "Enter your name: "; //creating a prompt
    std::getline(std::cin, name); //getting input from the variable

    //empty method

    name.append(" pogi"); //adding a string to the value input

    std::cout << "your are " << name;

    return 0; 
}
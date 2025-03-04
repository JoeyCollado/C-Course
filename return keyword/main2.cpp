#include <iostream>

std::string concatName(std::string string1, std::string string2); //declare a function


int main(){

    std::string firstName = "joey";
    std::string lastName = "collado";
    std::string fullName =  concatName(firstName, lastName); //invoke a function

    //display output

    std::cout << "Hello " << fullName;

    

    return 0;
}

std::string concatName(std::string string1, std::string string2){ //define a function

    return string1 + " " + string2;
}
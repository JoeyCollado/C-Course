#include <iostream>

int main(){

    std::string username;
    std::string password;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    if(username == "joey"){
        std::cout << "Username is Correct\n";
    }
    else{
        std::cout << "uUsername doesn't exist\n";
    }

    if(password == "collado"){
        std::cout << "Password is Correct\n";
    }
    else{
        std::cout << "Password is incorrect\n";
    }
    

    return 0;
}
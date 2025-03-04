#include <iostream>

int main(){

    int myInt;

    std::cout << "Enter an Integer (1-5): ";
    std::cin >> myInt;

    switch (myInt)
    {
    case 1:
        std::cout << "this is 1";
        break;
    case 2:
        std::cout << "this is 2";
        break;
    case 3:
        std::cout << "this is 3";
        break;
    case 4:
        std::cout << "this is 4";
        break;
    case 5:
        std::cout << "this is 5";
        break;
    
    default:
        std::cout << "Invalid input";
        break;
    }

    return 0;
}
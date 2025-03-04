#include <iostream>

int main(){

    // logical operator = && = check if two conditions are true         (AND)
    //                    !! = check if atleat one condition is true    (OR)
    //                    !  = reverse the logical state of its operand (NOT)

    //AND
    int temp;

    std::cout << "Enter temperature ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){ //both condition must be true

    std::cout << "The temperature is good";

    }
    else{
        std::cout << "The temperature is bad";
    }


    return 0;
}
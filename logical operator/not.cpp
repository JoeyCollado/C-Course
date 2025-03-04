#include <iostream>

int main(){

    // logical operator = && = check if two conditions are true         (AND)
    //                    !! = check if atleat one condition is true    (OR)
    //                    !  = reverse the logical state of its operand (NOT)

    //AND
    int temp;
    bool sunny = false;

    std::cout << "Enter temperature ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){ //reverse the logical state 

    std::cout << "The temperature is bad!\n";

    }
    else{
        std::cout << "The temperature is good\n";
    }
    if (!sunny){
        std::cout << "it is cloudy outside";

    }
    else{
        std::cout << "it is sunny outside";
    }


    return 0;
}
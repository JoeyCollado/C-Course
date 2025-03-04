#include <iostream>

int main(){

    //if statements = do something if condition is ture
    //                if not, then dont do it.

    int age;
    std::cout << "Enter Your age ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You frieren or smth?";
    }
    else if(age >= 18){
        std::cout << "You are old enough";
    }
    else if(age < 0){
        std::cout << "You ain't born yet man";
    }
    
    else{
        std::cout << "You are not old enough";
    }
    

    return 0;
}
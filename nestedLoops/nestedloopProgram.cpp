#include <iostream>

int main(){

    //nested loop = loop that is inside another loop

    int rows;
    int columns;
    char symbol;

    std::cout << "how many rows?: ";
    std::cin >> rows;

    std::cout << "how many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;


    for(int i = 1; i <= rows; i++){       //outer loop
        for(int j = 1; j <=columns; j++){   //inner loop
        std::cout << symbol;         //counts to 10
    }   
    std::cout << '\n';
    }
   

    return 0;
}
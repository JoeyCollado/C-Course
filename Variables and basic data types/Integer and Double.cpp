#include <iostream>
/*variable = is a representation of a number or value*/
/*to create a variable you need to first declare and then assigned value*/
/*declaration and assignment*/

int main(){
    // first way
    int x; //declaration
    x = 1203; //assignment

    //alternative
    int y = 12;
    int z = 45;
    int sum = y + z;

    // integer = whole number
    int age = 21;
    int year = 2023;

    // double = includes decimal portion
    double days = 7.5;
    double price = 10.99;
    double gpa = 2.3;
    double temp = 34.3;


    //print statements
    std::cout << x << '\n';  //   '\n' = new line
    std::cout << sum << '\n'; 
    std::cout << temp << '\n'; 
    

    return 0;
}
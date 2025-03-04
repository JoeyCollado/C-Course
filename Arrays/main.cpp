#include <iostream>


int main(){

    //array = a data structure that can hold multiple values
    //        values are accessed by an index number 
    //        kind of like a variable that holds multiple values

    std::string car[]= {"Bugatti", "Mustang", "Camaro"};

    car[0] = "ferrari"; //changes the value of the array from index 0

    std::cout << car[0] << '\n'; //get the value at index 0 from the array
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';
    return 0;
}
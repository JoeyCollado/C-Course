#include <iostream>


int main(){

    std::string students[] = {"joey", "jake", "kyle", "ranielle"};

    //std::cout << students[0]; // get 1 element of an array

    //to display all element
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){ //size of students divided by size of string calculates the elements of the array which means we can add elements to the array and we wouldn't worry about changing the condition of the for loop
        std::cout << students[i] << '\n'; 
    }

    return 0;
}
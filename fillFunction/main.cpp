#include <iostream>


int main(){


    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)
    //                 three arguments

    const int SIZE = 99; //fixed value
    std::string foods[SIZE]; //array

    fill(foods, foods + (SIZE/3), "pizza"); // fill the 1/3 of array with hamburger
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger"); // fill the 2/3 of array with hamburger
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog"); // fill the 3/3 of array with hamburger

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}
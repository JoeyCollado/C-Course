#include <iostream>



int main(){

    // forEachLoop = loop that eases the traversal over an
    //               iterable data set (Ex is array) this is easier and less syntax but less flexible

    std::string students[] = {"joey", "jake", "kyle", "ranielle", "ligma"};

    //std::cout << students[0]; // get 1 element of an array

    //to display all element
    for(std::string student : students){  // for each loop iterates over an array easily and you can add more datas
        std::cout << student << '\n'; 
    }

    return 0;
}
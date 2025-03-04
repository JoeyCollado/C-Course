#include <iostream>


int main(){

    std::string foods[5]; //specify a size
    int size = sizeof(foods)/sizeof(foods[0]); //calculate the size of the array
    std::string temp; //temporary variable

    for(int i = 0; i < size; i++){ //for loop to iterate through the elements of the array
        std::cout << "Enter in food you like or 'q' to quit #" << i + 1 << ": "; //prompt
        std::getline(std::cin, temp); //accept string input
        if(temp == "q"){ //if q is entered it will break and quit the loop
            break;
        }
        else{
            foods[i] = temp; //if not program will continue
        }
    }

    std::cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++){ //iterate over the elements of the array
        std::cout << foods[i] << '\n'; //display whatever the element is
    }

    return 0;
}
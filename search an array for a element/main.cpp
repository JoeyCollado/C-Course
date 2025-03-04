#include <iostream>

   int searchArray(std::string array[], int size, std::string element); //functino declaration

int main(){

    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]); //get the size of the array
    int index;
    std::string myFood; //what we're searching for

    std::cout << "Enter element to search for: " << '\n';
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood); //invoking the function

    if(index != -1){
        std::cout << myFood << " is at index " << index;
    }
    else{
        std::cout << myFood << " is not in the array";
    }

    return 0;
}
int searchArray(std::string array[], int size, std::string element){ //function that finds the element of an array

    for(int i = 0; i < size; i++){ //linear search
        if(array[i] == element){
            return i;
        }
    }
    return -1; //negative 1 means = not found, it is a sentinel value   
}
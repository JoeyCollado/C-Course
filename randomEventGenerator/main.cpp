#include <iostream>
#include <ctime>

int main(){
 
    //  
    srand(time(0)); //use the current time as the seed to generate random numbers
    int randNum = rand() % 5 + 1; //give us a random number ranges from 1-5

    switch (randNum){
    case 1: std::cout << "marbles\n";
    break;
    case 2: std::cout << "coins\n";
    break;
    case 3: std::cout << "wood\n";
    break;
    case 4: std::cout << "steel\n";
    break;
    case 5: std::cout << "diamond\n";
    break;

    }

    return 0;
}
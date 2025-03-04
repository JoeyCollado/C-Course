#include <iostream>
#include <ctime>

int main(){

    //declare local variables
    int num;
    int guess;
    int tries;

    srand(time(NULL)); //instantiate the random class
    num = (rand()% 100)+ 1; //create an object for the random class

    std::cout << "Number Guessing Game\n"; //decoration

    //creating a do while loop that house an if statement
    do{                  //do this block of code
        std::cout << "Enter a number from 1-100: "; //creating a prompt
        std::cin >> guess; //getting input from the local variable guess
        tries++; //record the amount of tries made

        //using if statement to create 3 conditions
        if(guess > num){  
            std::cout << "Too high\n";

        }
        else if(guess < num){
            std::cout << "Too low\n";
        }
        else{
            std::cout << "Correct! # if tries: " << tries << '\n';
        }

    }while(guess != num); //while guess is not equal to num the program will run

    return 0;
}
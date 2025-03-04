#include <iostream>
#include <iomanip>

//defining functions
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;
    
    do{
        //prompts
    std::cout << "*********************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "*********************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    //accepting user input
    std::cin >> choice;

    std::cin.clear(); //reset any error flags when standard input fails to interpret the input
    fflush(stdin); //clear the input buffer

    //creating a switch to examine user choice

    switch (choice){

    case 1: showBalance(balance);
            break;

    case 2: balance += deposit();
            showBalance(balance);
            break;

    case 3: balance -= withdraw(balance);
            showBalance(balance);
            break;

    case 4: std::cout << "Thanks for visiting!\n";
            break;

    default: std::cout << "Invalid Choice\n";
    }
    
    } while (choice != 4); //4 refers to the exit option
    
    return 0;
}

//declaring the functions

void showBalance(double balance){
      std::cout << "Your balance is: $"<< std::setprecision(2) << std::fixed << balance << '\n'; //set precision(2) pass in two floating numbers or decimal to the number

}
double deposit(){
 
      double amount = 0;
      std::cout << "Enter amount to deposited: ";
      std::cin >> amount;

      //prevents negative number to be deposited
      if(amount > 0){
        return amount;
      }
      else{
        std::cout << "That's not a valid amount: \n";
        return 0;
      }
}
double withdraw(double balance){

        double amount = 0;
        std::cout << "Enter amount to be withdrawn: ";
        std::cin >> amount;

        //prevents user from overwithdrawing
        if(amount > balance){
                std::cout << "Insufficient amount: \n";
                return 0;
        }
        else if(amount < 0){
                std::cout << "Invalid Amount\n";
                return 0;
        }
        else{
                return amount;
        }
}
        
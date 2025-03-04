#include <iostream>


 
    //cout << (insertion operator)
    //cin >>  (extraction operator)

    int main(){
    
        //declaration
        std::string name;
        std::string Fullname;
        int age;
        
        //for string
        //std::cout << "what is your name? ";
        //std::cin >> name;

        //if you want to display string with spaces
        std::cout << "what is your Fullname? ";
        std::getline(std::cin, Fullname);

        // for int
        std::cout << "what is your age? ";
        std::cin >> age;


        //displaying user input in terminal
        //std::cout << "Hello " << name << '\n';
        std::cout << "Hello " << Fullname << '\n';
        std::cout << "You are " << age << " years old";    

        


        return 0;
    }
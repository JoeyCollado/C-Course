#include <iostream>

//   function name
void happyBirthday(std::string name, int age); //inside the parenthesis is called parameters



int main(){            //main function

    //function = a block of reusable code
    
    std::string name = "joey";
    int age = 18;

    happyBirthday(name, age); //invokes/call the function, a function needs a matching parameter to use

    return 0;
}
void happyBirthday(std::string name, int age){ 

    std::cout << "Happy Bday to " << name << '\n';
    std::cout << "Happy Bday to " << name << '\n'; 
    std::cout << "Happy Bday to " << name << '\n';
    std::cout << "Happy Bday to " << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';

}
#include <iostream>

int main(){
    //char = store single characters
    char grade = 'A';
    char initial = 'U';

    //boolean = true or false, has only two states
    bool student = true;
    bool power = true;
    bool forSale = false;

    //strings = is an object that represents a sequences of text
    std::string name = "Joey Aibert U. Collado";
    std::string first = "I AM";
    std::string last = "NIGGA";

    //print statements 
    std::cout << initial << '\n'; //it returns 1 because its true if false 0
    std::cout << student << '\n';
    std::cout << "Hello " + name << '\n'; //here i use string literal to display additional text along with my variable
    std::cout << "Hello " << name << '\n'; //alternative
    std::cout << first + " " + last << '\n'; //here i used concatenation
    
    
    return 0;
}
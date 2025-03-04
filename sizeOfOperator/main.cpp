#include <iostream>

int main(){
 
     // sizeof() = determines the size in bytes of a: 
    //                   variable, data type, class, objects, etc.

    std::string name = "Bro Code";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}
#include <iostream>
#include <vector>
//      long data type name
typedef std::vector<std::pair<std::string, int>> pairlist_t;
// new identifier                               =

typedef std::string text_t;
typedef int number_t;

int main(){
    // typedef = reserved keyword used to create an additional name 
    //           (alias) for another data type.
    //           New Identifier for an existing type
    //           helps with readability and reduces typos

    //calling the alias
    pairlist_t pairlist;
    text_t firstName = "joey";
    number_t age = 42;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             a namespace allows for identically named entities
    //             as long as the namespaces are different

    int x = 0;

    std::cout << x << '\n'; // if we dont specify what x we're using its going to use the local variable (the variable inside the main function)
     
    std::cout << first::x << '\n'; //calls the the global variable first x

    std::cout << second::x << '\n'; //call the second x
    return 0;
}
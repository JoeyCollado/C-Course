#include <iostream>
#include <cmath>

int main(){
  
    double a;
    double b;
    double c;


    std::cout << "enter side a: ";
    std::cin >> a;

    std::cout << "enter side b: ";
    std::cin >> b;

    a = pow (a, 2);
    b = pow (b, 2);
    c = sqrt(a + b);

    std::cout << "side c is: " << c;

    return 0;
}
#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z;

    //
    z = std::max(x,y); //max function
    z = std::min(x,y); //min function
    z = pow(2,3); //to the power function
    z = sqrt(9); //sqrt
    z = abs(-3); //absolute value
    z = round(x); //round function
    z = ceil(x); //round up
    z = floor(x); //round down



    std::cout << z;


    return 0;
}
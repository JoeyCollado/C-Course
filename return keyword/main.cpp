#include <iostream>

double square(double length); //declaring a function
double cube(double length); //another function

int main(){
 
    //return = return a value back to the spot
    //         where you called the encompassing function

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length){  //function definition

    return length * length;

//since we're returning a double we changed void to double

}
double cube(double length){  //function definition

    return length * length * length;

}
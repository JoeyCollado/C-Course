#include <iostream>

int main(){


    double temp;
    char unit;

    std::cout << "Temperature Conversion \n";

    std::cout << "F = Farenheit \n";
    std::cout << "C = Celcius \n";
    std::cout << "What unit would you like to convert to: \n";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){

        std::cout << "Enter the temperature in celcius: ";
        std::cin >> temp;
        //formula
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n"; 

    }
    else if(unit == 'C' || unit == 'c'){

        std::cout << "Enter the temperature in farenheit: ";
        std::cin >> temp;
        //formula
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";

    }
    else{
        std::cout << "Please enter only C or F \n";
    }

    return 0;
}
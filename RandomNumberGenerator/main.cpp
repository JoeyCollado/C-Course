#include <iostream>
#include <ctime>    //needs to be imported when you want to use random numbers

int main(){

    //pseduo-random = not truly random (But close enough)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; //since range starts from 0 to 6, we added 1
     int num2 = (rand() % 6) + 1;
      int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';


    return 0;
}
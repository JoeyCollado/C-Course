#include <iostream>

int main(){

    //nested loop = loop that is inside another loop


    for(int i = 1; i <= 3; i++){       //outer loop
        for(int j = 1; j <=10; j++){   //inner loop
        std::cout << j << ' ';         //counts to 10
    }   
    std::cout << '\n';
    }
   

    return 0;
}
#include <iostream>

int main(){

    //break    = break out of a loop
    //continue = skip current iteration

    for(int i = 1; i <=20; i++){
        if(i == 13){
            //break;   //breaking out the loop
            continue; //skip the iteration and continue the loop
        }
        std::cout << i << '\n';


    }

    return 0;
}
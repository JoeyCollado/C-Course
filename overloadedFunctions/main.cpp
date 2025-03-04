#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    //functions can have the same name but must have different parameters
    
    bakePizza();
    bakePizza("chesse");
    bakePizza("bacon", "cheese");


    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza\n";

}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " " << topping2 << " pizza\n";

}